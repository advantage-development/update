/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *topLayout;
    QLabel *labelAlerts;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelWatchPending;
    QLabel *labelUnconfirmed;
    QLabel *labelWatchImmature;
    QFrame *lineSpendableBalance;
    QFrame *lineWatchBalance;
    QLabel *labelTotalText;
    QLabel *labelImmature;
    QLabel *labelImmatureText;
    QLabel *labelTotal;
    QLabel *labelWatchTotal;
    QLabel *labelBalanceText;
    QLabel *labelBalance;
    QLabel *label_10;
    QLabel *labelStake;
    QLabel *labelWatchStake;
    QLabel *labelWatchAvailable;
    QLabel *labelPendingText;
    QLabel *labelSpendable;
    QLabel *labelWatchonly;
    QPushButton *sendPaymentTransferButton;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QListView *listTransactions;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(960, 623);
        OverviewPage->setMinimumSize(QSize(960, 0));
        topLayout = new QVBoxLayout(OverviewPage);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        labelAlerts = new QLabel(OverviewPage);
        labelAlerts->setObjectName(QStringLiteral("labelAlerts"));
        labelAlerts->setVisible(false);
        labelAlerts->setStyleSheet(QStringLiteral("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000;"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);

        topLayout->addWidget(labelAlerts);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(OverviewPage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        labelWalletStatus = new QLabel(frame);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelWalletStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelWalletStatus->setText(QStringLiteral("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 3, 1, 1);

        labelWatchPending = new QLabel(frame);
        labelWatchPending->setObjectName(QStringLiteral("labelWatchPending"));
        labelWatchPending->setFont(font);
        labelWatchPending->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchPending->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelWatchPending->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchPending, 3, 2, 1, 1);

        labelUnconfirmed = new QLabel(frame);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setFont(font);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUnconfirmed, 3, 1, 1, 1);

        labelWatchImmature = new QLabel(frame);
        labelWatchImmature->setObjectName(QStringLiteral("labelWatchImmature"));
        labelWatchImmature->setFont(font);
        labelWatchImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelWatchImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchImmature, 4, 2, 1, 1);

        lineSpendableBalance = new QFrame(frame);
        lineSpendableBalance->setObjectName(QStringLiteral("lineSpendableBalance"));
        lineSpendableBalance->setFrameShape(QFrame::HLine);
        lineSpendableBalance->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lineSpendableBalance, 5, 0, 1, 2);

        lineWatchBalance = new QFrame(frame);
        lineWatchBalance->setObjectName(QStringLiteral("lineWatchBalance"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineWatchBalance->sizePolicy().hasHeightForWidth());
        lineWatchBalance->setSizePolicy(sizePolicy);
        lineWatchBalance->setMinimumSize(QSize(140, 0));
        lineWatchBalance->setFrameShape(QFrame::HLine);
        lineWatchBalance->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lineWatchBalance, 5, 2, 1, 1);

        labelTotalText = new QLabel(frame);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));

        gridLayout->addWidget(labelTotalText, 6, 0, 1, 1);

        labelImmature = new QLabel(frame);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font);
        labelImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelImmature, 4, 1, 1, 1);

        labelImmatureText = new QLabel(frame);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));

        gridLayout->addWidget(labelImmatureText, 4, 0, 1, 1);

        labelTotal = new QLabel(frame);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setFont(font);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelTotal, 6, 1, 1, 1);

        labelWatchTotal = new QLabel(frame);
        labelWatchTotal->setObjectName(QStringLiteral("labelWatchTotal"));
        labelWatchTotal->setFont(font);
        labelWatchTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelWatchTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchTotal, 6, 2, 1, 1);

        labelBalanceText = new QLabel(frame);
        labelBalanceText->setObjectName(QStringLiteral("labelBalanceText"));

        gridLayout->addWidget(labelBalanceText, 1, 0, 1, 1);

        labelBalance = new QLabel(frame);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        labelBalance->setFont(font);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBalance, 1, 1, 1, 1);

        label_10 = new QLabel(frame);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 2, 0, 1, 1);

        labelStake = new QLabel(frame);
        labelStake->setObjectName(QStringLiteral("labelStake"));
        labelStake->setFont(font);
        labelStake->setCursor(QCursor(Qt::IBeamCursor));
        labelStake->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelStake->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelStake->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelStake, 2, 1, 1, 1);

        labelWatchStake = new QLabel(frame);
        labelWatchStake->setObjectName(QStringLiteral("labelWatchStake"));
        labelWatchStake->setFont(font);
        labelWatchStake->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchStake->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelWatchStake->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchStake->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchStake, 2, 2, 1, 1);

        labelWatchAvailable = new QLabel(frame);
        labelWatchAvailable->setObjectName(QStringLiteral("labelWatchAvailable"));
        labelWatchAvailable->setFont(font);
        labelWatchAvailable->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchAvailable->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelWatchAvailable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchAvailable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchAvailable, 1, 2, 1, 1);

        labelPendingText = new QLabel(frame);
        labelPendingText->setObjectName(QStringLiteral("labelPendingText"));

        gridLayout->addWidget(labelPendingText, 3, 0, 1, 1);

        labelSpendable = new QLabel(frame);
        labelSpendable->setObjectName(QStringLiteral("labelSpendable"));
        labelSpendable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelSpendable, 0, 1, 1, 1);

        labelWatchonly = new QLabel(frame);
        labelWatchonly->setObjectName(QStringLiteral("labelWatchonly"));
        labelWatchonly->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelWatchonly, 0, 2, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        sendPaymentTransferButton = new QPushButton(frame);
        sendPaymentTransferButton->setObjectName(QStringLiteral("sendPaymentTransferButton"));
        sendPaymentTransferButton->setFont(font);

        verticalLayout_4->addWidget(sendPaymentTransferButton);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);

        verticalLayout_4->addWidget(pushButton);

        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMinimumSize(QSize(265, 0));
        QFont font1;
        font1.setFamily(QStringLiteral("Helvetica Light"));
        textEdit->setFont(font1);
        textEdit->setAutoFillBackground(true);
        textEdit->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        textEdit->setFrameShape(QFrame::Box);
        textEdit->setFrameShadow(QFrame::Raised);
        textEdit->setLineWidth(3);
        textEdit->setReadOnly(true);

        verticalLayout_4->addWidget(textEdit);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_4->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_4->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_4->addWidget(pushButton_4);


        verticalLayout_2->addWidget(frame);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        frame_2 = new QFrame(OverviewPage);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QLabel(frame_2);
        labelTransactionsStatus->setObjectName(QStringLiteral("labelTransactionsStatus"));
        labelTransactionsStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelTransactionsStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QStringLiteral("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        listTransactions = new QListView(frame_2);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        listTransactions->setStyleSheet(QStringLiteral("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(listTransactions);


        verticalLayout_3->addWidget(frame_2);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        topLayout->addLayout(horizontalLayout);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", nullptr));
        label_5->setText(QApplication::translate("OverviewPage", "Balances", nullptr));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Advantage network after a connection is established, but this process has not completed yet.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchPending->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance in watch-only addresses that has not yet matured", nullptr));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:", nullptr));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance that has not yet matured", nullptr));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", nullptr));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchTotal->setToolTip(QApplication::translate("OverviewPage", "Current total balance in watch-only addresses", nullptr));
#endif // QT_NO_TOOLTIP
        labelBalanceText->setText(QApplication::translate("OverviewPage", "Available:", nullptr));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", nullptr));
#endif // QT_NO_TOOLTIP
        label_10->setText(QApplication::translate("OverviewPage", "Stake:", nullptr));
#ifndef QT_NO_TOOLTIP
        labelStake->setToolTip(QApplication::translate("OverviewPage", "Total of coins that was staked, and do not yet count toward the current balance", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchStake->setToolTip(QApplication::translate("OverviewPage", "Total of coins that was staked in watch-only addresses, and do not yet count toward the current watch-only balance", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchAvailable->setToolTip(QApplication::translate("OverviewPage", "Your current balance in watch-only addresses", nullptr));
#endif // QT_NO_TOOLTIP
        labelPendingText->setText(QApplication::translate("OverviewPage", "Pending:", nullptr));
        labelSpendable->setText(QApplication::translate("OverviewPage", "Spendable:", nullptr));
        labelWatchonly->setText(QApplication::translate("OverviewPage", "Watch-only:", nullptr));
        sendPaymentTransferButton->setText(QApplication::translate("OverviewPage", "Send Payment Transfer", nullptr));
        pushButton->setText(QApplication::translate("OverviewPage", "Add Wallet Balance", nullptr));
        textEdit->setHtml(QApplication::translate("OverviewPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Helvetica Light'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icons/bitcoin_testnet\" /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">Welcome to the future in modernized peer-to-peer (P2P) payments:</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\342\200\224\342\200\224\342\200\224</p>\n"
"<p align=\"center\" style=\" m"
                        "argin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">You can use your wallet special features to:</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:10pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\342\200\242 Send and receive payments to and from anywhere around the World</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\342\200\242 View balances and see your previously made payment transactions"
                        "</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\342\200\242 Earn revenue dividends on each USDA coin you actively carry</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">\342\200\242 Set-up your first ever Masternodes for increased rewards</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\342\200\224\342\200\224\342\200\224</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Send to whomever, wherever, whenever.</span></p></body></html>", nullptr));
        pushButton_2->setText(QApplication::translate("OverviewPage", "Visit Global Ledger", nullptr));
        pushButton_3->setText(QApplication::translate("OverviewPage", "Join Discord Group Chat", nullptr));
        pushButton_4->setText(QApplication::translate("OverviewPage", "Join Telegram Group Chat", nullptr));
        label_4->setText(QApplication::translate("OverviewPage", "Recent transactions", nullptr));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Advantage network after a connection is established, but this process has not completed yet.", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
