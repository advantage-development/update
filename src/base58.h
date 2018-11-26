// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2013 The Bitcoin developers
// Copyright (c) 2018 The Advantage developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

//
// Why base-58 instead of standard base-64 encoding?
// - Don't want 0OIl characters that look the same in some fonts and
//      could be used to create visually identical looking account numbers.
// - A string with non-alphanumeric characters is not as easily accepted as an account number.
// - E-mail usually won't line-break if there's no punctuation to break at.
// - Double-clicking selects the whole number as one word if it's all alphanumeric.
//
#ifndef BITCREDIT_BASE58_H
#define BITCREDIT_BASE58_H

#include "chainfunctions.h"
#include "pubkey.h"
#include "script.h"

#include <string>
#include <vector>

/**
 * Encode a byte sequence as a base58-encoded string.
 * pbegin and pend cannot be NULL, unless both are.
 */
std::string EncodeBase58(const unsigned char* pbegin, const unsigned char* pend);

/**
 * Encode a byte vector as a base58-encoded string
 */
std::string EncodeBase58(const std::vector<unsigned char>& vch);

/**
 * Decode a base58-encoded string (psz) into a byte vector (vchRet).
 * return true if decoding is successful.
 * psz cannot be NULL.
 */
bool DecodeBase58(const char* psz, std::vector<unsigned char>& vchRet);

/**
 * Decode a base58-encoded string (str) into a byte vector (vchRet).
 * return true if decoding is successful.
 */
bool DecodeBase58(const std::string& str, std::vector<unsigned char>& vchRet);

/**
 * Encode a byte vector into a base58-encoded string, including checksum
 */
std::string EncodeBase58Check(const std::vector<unsigned char>& vchIn);

/**
 * Decode a base58-encoded string (psz) that includes a checksum into a byte
 * vector (vchRet), return true if decoding is successful
 */
inline bool DecodeBase58Check(const char* psz, std::vector<unsigned char>& vchRet);

/**
 * Decode a base58-encoded string (str) that includes a checksum into a byte
 * vector (vchRet), return true if decoding is successful
 */
inline bool DecodeBase58Check(const std::string& str, std::vector<unsigned char>& vchRet);

/**
 * Base class for all base58-encoded data
 */
class CBase58Data
{
protected:
    // the version byte(s)
    std::vector<unsigned char> vchVersion;

    // the actually encoded data
    typedef std::vector<unsigned char, zero_after_free_allocator<unsigned char> > vector_uchar;
    vector_uchar vchData;

    CBase58Data();
    void SetData(const std::vector<unsigned char> &vchVersionIn, const void* pdata, size_t nSize);
    void SetData(const std::vector<unsigned char> &vchVersionIn, const unsigned char *pbegin, const unsigned char *pend);

public:
    bool SetString(const char* psz, unsigned int nVersionBytes = 1);
    bool SetString(const std::string& str);
    std::string ToString() const;
    int CompareTo(const CBase58Data& b58) const;

    bool operator==(const CBase58Data& b58) const { return CompareTo(b58) == 0; }
    bool operator<=(const CBase58Data& b58) const { return CompareTo(b58) <= 0; }
    bool operator>=(const CBase58Data& b58) const { return CompareTo(b58) >= 0; }
    bool operator< (const CBase58Data& b58) const { return CompareTo(b58) <  0; }
    bool operator> (const CBase58Data& b58) const { return CompareTo(b58) >  0; }
};

/** base58-encoded Advantage addresses.
 * Public-key-hash-addresses have version 0 (or 111 testnet).
 * The data vector contains RIPEMD160(SHA256(pubkey)), where pubkey is the serialized public key.
 * Script-hash-addresses have version 5 (or 196 testnet).
 * The data vector contains RIPEMD160(SHA256(cscript)), where cscript is the serialized redemption script.
 */
class CAdvantagecoinAddress : public CBase58Data {
public:
    bool Set(const CKeyID &id);
    bool Set(const CScriptID &id);
    bool Set(const CTxDestination &dest);
    bool IsValid() const;

    CAdvantagecoinAddress() {}
    CAdvantagecoinAddress(const CTxDestination &dest) { Set(dest); }
    CAdvantagecoinAddress(const std::string& strAddress) { SetString(strAddress); }
    CAdvantagecoinAddress(const char* pszAddress) { SetString(pszAddress); }

    CTxDestination Get() const;
    bool GetKeyID(CKeyID &keyID) const;
    bool IsScript() const;
};

/**
 * A base58-encoded secret key
 */
class CAdvantagecoinSecret : public CBase58Data
{
public:
    void SetKey(const CKey& vchSecret);
    CKey GetKey();
    bool IsValid() const;
    bool SetString(const char* pszSecret);
    bool SetString(const std::string& strSecret);

    CAdvantagecoinSecret(const CKey& vchSecret) { SetKey(vchSecret); }
    CAdvantagecoinSecret() {}
};

template<typename K, int Size, CChainParams::Base58Type Type> class CAdvantagecoinExtKeyBase : public CBase58Data
{
public:
    void SetKey(const K &key) {
        unsigned char vch[Size];
        key.Encode(vch);
        SetData(Params().Base58Prefix(Type), vch, vch+Size);
    }

    K GetKey() {
        K ret;
        ret.Decode(&vchData[0], &vchData[Size]);
        return ret;
    }

    CAdvantagecoinExtKeyBase(const K &key) {
        SetKey(key);
    }

    CAdvantagecoinExtKeyBase() {}
};

typedef CAdvantagecoinExtKeyBase<CExtKey, 35, CChainParams::EXT_SECRET_KEY> CAdvantagecoinExtKey;
typedef CAdvantagecoinExtKeyBase<CExtPubKey, 35, CChainParams::EXT_PUBLIC_KEY> CAdvantagecoinExtPubKey;

/** base58-encoded Bitcoin addresses.
 * Public-key-hash-addresses have version 0 (or 111 testnet).
 * The data vector contains RIPEMD160(SHA256(pubkey)), where pubkey is the serialized public key.
 * Script-hash-addresses have version 5 (or 196 testnet).
 * The data vector contains RIPEMD160(SHA256(cscript)), where cscript is the serialized redemption script.
 */
class CBitcoinAddress : public CBase58Data {
public:
    bool Set(const CKeyID &id);
    bool Set(const CScriptID &id);
    bool Set(const CTxDestination &dest);
    bool IsValid() const;

    CBitcoinAddress() {}
    CBitcoinAddress(const CTxDestination &dest) { Set(dest); }
    CBitcoinAddress(const std::string& strAddress) { SetString(strAddress); }
    CBitcoinAddress(const char* pszAddress) { SetString(pszAddress); }

    CTxDestination Get() const;
    bool GetKeyID(CKeyID &keyID) const;
    bool IsScript() const;
};

#endif // BITCREDIT_BASE58_H
