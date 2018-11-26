// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2012 The Bitcoin developers
// Copyright (c) 2018 The Advantage developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
// 
#include "assert.h"

#include "chainfunctions.h"
#include "mainfunctions.h"
#include "util.h"
#include "base58.h"

#include <boost/assign/list_of.hpp>

using namespace boost::assign;

struct SeedSpec6 {
    uint8_t addr[16];
    uint16_t port;
};

#include "chainparamsseeds.h"

CScript CChainParams::GetTreasuryRewardScript() const {
	CAdvantagecoinAddress address(treasuryAddress.c_str());
	assert(address.IsValid());
	//assert(address.IsScript());
	CTxDestination dest = address.Get();
	CScript script = CScript();
	script.SetDestination(dest);
	return script;
}

//
// Main network
//

// Convert the pnSeeds array into usable address objects.
static void convertSeeds(std::vector<CAddress> &vSeedsOut, const unsigned int *data, unsigned int count, int port)
{
     // It'll only connect to one or two seed nodes because once it connects,
     // it'll get a pile of addresses with newer timestamps.
     // Seed nodes are given a random 'last seen time' of between one and two
     // weeks ago.
     const int64_t nOneWeek = 7*24*60*60;
    for (unsigned int k = 0; k < count; ++k)
    {
        struct in_addr ip;
        unsigned int i = data[k], t;

        // -- convert to big endian
        t =   (i & 0x000000ff) << 24u
            | (i & 0x0000ff00) << 8u
            | (i & 0x00ff0000) >> 8u
            | (i & 0xff000000) >> 24u;

        memcpy(&ip, &t, sizeof(ip));

        CAddress addr(CService(ip, port));
        addr.nTime = GetTime()-GetRand(nOneWeek)-nOneWeek;
        vSeedsOut.push_back(addr);
    }
}

#define SHOW_LOG true

class CMainParams : public CChainParams {
public:
    CMainParams() {
        // The message start string is designed to be unlikely to occur in normal data.
        // The characters are rarely used upper ASCII, not valid as UTF-8, and produce
        // a large 4-byte int at any alignment.
        pchMessageStart[0] = 0xA1;
        pchMessageStart[1] = 0xA2;
        pchMessageStart[2] = 0xB3;
        pchMessageStart[3] = 0xC5;
        vAlertPubKey = ParseHex("045f6230f02f5199e65e3a66751d3a0c6cb00d5ea047fb7b887599157e2d9c2d598d477d98b8aa852ea2a5a8cc98a119d2f6fa8364105415d85d65e85fe6ee0cc3");
        nDefaultPort = 11235;
        nRPCPort = 53211;
        bnProofOfWorkLimit = CBigNum(~uint256(0) >> 16);
		treasuryAddress = "APZg5J9U67fdCRre7oj9KqzpnLqP5REwjx"; //update accordingly

            const char* pszTimestamp = "1525842106 seconds since Jan 01 1970. (UTC)";
        std::vector<CTxIn> vin;
        vin.resize(1);
        vin[0].scriptSig = CScript() << 0 << CBigNum(42) << vector<unsigned char>((const unsigned char*)pszTimestamp, (const unsigned char*)pszTimestamp + strlen(pszTimestamp));
        std::vector<CTxOut> vout;
        vout.resize(1);
        vout[0].SetEmpty();
        CTransaction txNew(1, 1525842106, vin, vout, 0);
        genesis.vtx.push_back(txNew);
        genesis.hashPrevBlock = 0;
        genesis.hashMerkleRoot = genesis.BuildMerkleTree();
        genesis.nVersion = 1;
        genesis.nTime    = 1525842106;
        genesis.nBits    = bnProofOfWorkLimit.GetCompact();
        genesis.nNonce   = 1010568;

        hashGenesisBlock = genesis.GetHash();

        assert(hashGenesisBlock == uint256("0x00004cd62c655e1492e4d87736f23fdd6ad260980007b72bc33373aed2b79258"));
        assert(genesis.hashMerkleRoot == uint256("0x0492a565583151305c2246f03a4fa2297a90b4633e4f5da358b23d9691e86fca"));

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1,23);
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1,16);
        base58Prefixes[SECRET_KEY] =     std::vector<unsigned char>(1,63);
        base58Prefixes[STEALTH_ADDRESS] = std::vector<unsigned char>(1,75);
        base58Prefixes[EXT_PUBLIC_KEY] = list_of(0x04)(0x88)(0xB2)(0x1E).convert_to_container<std::vector<unsigned char> >();
        base58Prefixes[EXT_SECRET_KEY] = list_of(0x04)(0x88)(0xAD)(0xE4).convert_to_container<std::vector<unsigned char> >();

	vSeeds.push_back(CDNSSeedData("1", "167.99.183.76"));
        nPoolMaxTransactions = 3;

        strDarksendPoolDummyAddress = "AHhWC9PRgMzm6z5Xx3zjCSTG5zJ5u71UbL"; //irrelevant
        nLastPOWBlock = 100; //update accordingly
        nPOSStartBlock = 2;
    }

    virtual const CBlock& GenesisBlock() const { return genesis; }
    virtual Network NetworkID() const { return CChainParams::MAIN; }

    virtual const vector<CAddress>& FixedSeeds() const {
        return vFixedSeeds;
    }
protected:
    CBlock genesis;
    vector<CAddress> vFixedSeeds;
};
static CMainParams mainParams;


//
// Testnet
//

class CTestNetParams : public CMainParams {
public:
    CTestNetParams() {
        // The message start string is designed to be unlikely to occur in normal data.
        // The characters are rarely used upper ASCII, not valid as UTF-8, and produce
        // a large 4-byte int at any alignment.
        pchMessageStart[0] = 0x3a;
        pchMessageStart[1] = 0xd1;
        pchMessageStart[2] = 0xca;
        pchMessageStart[3] = 0x4a;
        bnProofOfWorkLimit = CBigNum(~uint256(0) >> 16);
        vAlertPubKey = ParseHex("0435e550759fa941172546f9930d0f30e64c4633bd4a0d5f4388567d45e58f490c78cca77cb5f56f9fb25f26bf89eb6c9efe8bc0eb327b1d4078c67ba56c79c870");
        nDefaultPort = 5112;
        nRPCPort = 2245;
        bnProofOfWorkLimit = CBigNum(~uint256(0) >> 8);
        strDataDir = "testnet";
		treasuryAddress = "aWsdgHxx8dCDwBoPEBfGNHPPnLrSUdsr6B"; //testing purposes only

        // Modify the testnet genesis block so the timestamp is valid for a later start.
        genesis.nBits  = bnProofOfWorkLimit.GetCompact();
        genesis.nTime    = 1525842106;
        genesis.nNonce = 3363;

        hashGenesisBlock = genesis.GetHash();
        assert(hashGenesisBlock == uint256("0x00608a61e6795d83dd3ec9db646bd9658f4f51e64addfecd5684ea83c8bd63c7"));

        vFixedSeeds.clear();
        vSeeds.clear();

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1,83);
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1,114);
        base58Prefixes[SECRET_KEY]     = std::vector<unsigned char>(1,125);
        base58Prefixes[STEALTH_ADDRESS] = std::vector<unsigned char>(1,137);
        base58Prefixes[EXT_PUBLIC_KEY] = list_of(0x04)(0x35)(0x87)(0xCF).convert_to_container<std::vector<unsigned char> >();
        base58Prefixes[EXT_SECRET_KEY] = list_of(0x04)(0x35)(0x83)(0x94).convert_to_container<std::vector<unsigned char> >();

        nLastPOWBlock = 0x7fffffff;
    }
    virtual Network NetworkID() const { return CChainParams::TESTNET; }
};
static CTestNetParams testNetParams;


static CChainParams *pCurrentParams = &mainParams;

const CChainParams &Params() {
    return *pCurrentParams;
}

void SelectParams(CChainParams::Network network) {
    switch (network) {
        case CChainParams::MAIN:
            pCurrentParams = &mainParams;
            break;
        case CChainParams::TESTNET:
            pCurrentParams = &testNetParams;
            break;
        default:
            assert(false && "Unimplemented network");
            return;
    }
}

bool SelectParamsFromCommandLine() {

    bool fTestNet = GetBoolArg("-testnet", false);

    if (fTestNet) {
        SelectParams(CChainParams::TESTNET);
    } else {
        SelectParams(CChainParams::MAIN);
    }
    return true;
}
