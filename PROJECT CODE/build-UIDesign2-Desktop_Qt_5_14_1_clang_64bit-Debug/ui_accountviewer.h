/********************************************************************************
** Form generated from reading UI file 'accountviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTVIEWER_H
#define UI_ACCOUNTVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_accountViewer
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *getName;
    QLabel *label_4;
    QLabel *getEmail;
    QLabel *label_6;
    QLabel *getUsername;
    QLabel *label_8;
    QLabel *getPassword;
    QLabel *label_10;
    QLabel *getAccountType;
    QPushButton *pushButton;
    QLabel *logoMM_2;
    QLabel *logoMM;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *homeButton;
    QPushButton *mListButton;
    QPushButton *itemsViewedButton;
    QPushButton *myCommentsButton;
    QPushButton *accountButton;

    void setupUi(QDialog *accountViewer)
    {
        if (accountViewer->objectName().isEmpty())
            accountViewer->setObjectName(QString::fromUtf8("accountViewer"));
        accountViewer->resize(820, 600);
        label = new QLabel(accountViewer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 161, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next Condensed"));
        font.setPointSize(25);
        font.setItalic(false);
        label->setFont(font);
        groupBox = new QGroupBox(accountViewer);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 140, 401, 421));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Yuanti TC"));
        font1.setPointSize(22);
        groupBox->setFont(font1);
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        getName = new QLabel(groupBox);
        getName->setObjectName(QString::fromUtf8("getName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, getName);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        getEmail = new QLabel(groupBox);
        getEmail->setObjectName(QString::fromUtf8("getEmail"));

        formLayout->setWidget(1, QFormLayout::FieldRole, getEmail);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        getUsername = new QLabel(groupBox);
        getUsername->setObjectName(QString::fromUtf8("getUsername"));

        formLayout->setWidget(2, QFormLayout::FieldRole, getUsername);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        getPassword = new QLabel(groupBox);
        getPassword->setObjectName(QString::fromUtf8("getPassword"));

        formLayout->setWidget(3, QFormLayout::FieldRole, getPassword);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_10);

        getAccountType = new QLabel(groupBox);
        getAccountType->setObjectName(QString::fromUtf8("getAccountType"));

        formLayout->setWidget(4, QFormLayout::FieldRole, getAccountType);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(5, QFormLayout::FieldRole, pushButton);

        logoMM_2 = new QLabel(accountViewer);
        logoMM_2->setObjectName(QString::fromUtf8("logoMM_2"));
        logoMM_2->setGeometry(QRect(700, 0, 111, 71));
        logoMM = new QLabel(accountViewer);
        logoMM->setObjectName(QString::fromUtf8("logoMM"));
        logoMM->setGeometry(QRect(700, 0, 111, 71));
        layoutWidget = new QWidget(accountViewer);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 70, 791, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        homeButton = new QPushButton(layoutWidget);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));

        horizontalLayout->addWidget(homeButton);

        mListButton = new QPushButton(layoutWidget);
        mListButton->setObjectName(QString::fromUtf8("mListButton"));

        horizontalLayout->addWidget(mListButton);

        itemsViewedButton = new QPushButton(layoutWidget);
        itemsViewedButton->setObjectName(QString::fromUtf8("itemsViewedButton"));

        horizontalLayout->addWidget(itemsViewedButton);

        myCommentsButton = new QPushButton(layoutWidget);
        myCommentsButton->setObjectName(QString::fromUtf8("myCommentsButton"));

        horizontalLayout->addWidget(myCommentsButton);

        accountButton = new QPushButton(layoutWidget);
        accountButton->setObjectName(QString::fromUtf8("accountButton"));

        horizontalLayout->addWidget(accountButton);


        retranslateUi(accountViewer);

        QMetaObject::connectSlotsByName(accountViewer);
    } // setupUi

    void retranslateUi(QDialog *accountViewer)
    {
        accountViewer->setWindowTitle(QCoreApplication::translate("accountViewer", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("accountViewer", "<h1>Account</h1>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("accountViewer", "Account Info", nullptr));
        label_2->setText(QCoreApplication::translate("accountViewer", "<b>Name:</b>", nullptr));
        getName->setText(QCoreApplication::translate("accountViewer", "getName", nullptr));
        label_4->setText(QCoreApplication::translate("accountViewer", "<b>Email:</b>", nullptr));
        getEmail->setText(QCoreApplication::translate("accountViewer", "getEmail", nullptr));
        label_6->setText(QCoreApplication::translate("accountViewer", "<b>Username:</b>", nullptr));
        getUsername->setText(QCoreApplication::translate("accountViewer", "getUsername", nullptr));
        label_8->setText(QCoreApplication::translate("accountViewer", "<b>Password:</b>", nullptr));
        getPassword->setText(QCoreApplication::translate("accountViewer", "getPassword", nullptr));
        label_10->setText(QCoreApplication::translate("accountViewer", "<b>Account Type:</b>", nullptr));
        getAccountType->setText(QCoreApplication::translate("accountViewer", "getAccountType", nullptr));
        pushButton->setText(QCoreApplication::translate("accountViewer", "Edit", nullptr));
        logoMM_2->setText(QString());
        logoMM->setText(QString());
        homeButton->setText(QCoreApplication::translate("accountViewer", "Home", nullptr));
        mListButton->setText(QCoreApplication::translate("accountViewer", "Museum list", nullptr));
        itemsViewedButton->setText(QCoreApplication::translate("accountViewer", "Items Viewed", nullptr));
        myCommentsButton->setText(QCoreApplication::translate("accountViewer", "My Comments", nullptr));
        accountButton->setText(QCoreApplication::translate("accountViewer", "Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class accountViewer: public Ui_accountViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTVIEWER_H
