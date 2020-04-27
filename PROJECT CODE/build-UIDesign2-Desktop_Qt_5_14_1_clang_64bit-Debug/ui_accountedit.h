/********************************************************************************
** Form generated from reading UI file 'accountedit.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTEDIT_H
#define UI_ACCOUNTEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountEdit
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *homeButton;
    QPushButton *mListButton;
    QPushButton *itemsViewedButton;
    QPushButton *myCommentsButton;
    QPushButton *accountButton;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *Name;
    QLabel *label_4;
    QLineEdit *Email;
    QLabel *label_3;
    QLineEdit *Username;
    QLabel *label_5;
    QLineEdit *Password;
    QLabel *label_6;
    QLineEdit *PasswordConf;
    QLabel *label_7;
    QRadioButton *Viewer;
    QRadioButton *Curator;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *logoMM;

    void setupUi(QDialog *AccountEdit)
    {
        if (AccountEdit->objectName().isEmpty())
            AccountEdit->setObjectName(QString::fromUtf8("AccountEdit"));
        AccountEdit->resize(820, 600);
        label = new QLabel(AccountEdit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 161, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next Condensed"));
        font.setPointSize(25);
        font.setItalic(false);
        label->setFont(font);
        layoutWidget = new QWidget(AccountEdit);
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

        groupBox = new QGroupBox(AccountEdit);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 130, 791, 401));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Yuanti TC"));
        font1.setPointSize(18);
        groupBox->setFont(font1);
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        Name = new QLineEdit(groupBox);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, Name);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        Email = new QLineEdit(groupBox);
        Email->setObjectName(QString::fromUtf8("Email"));
        Email->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, Email);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        Username = new QLineEdit(groupBox);
        Username->setObjectName(QString::fromUtf8("Username"));
        Username->setFont(font1);

        formLayout->setWidget(2, QFormLayout::FieldRole, Username);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        Password = new QLineEdit(groupBox);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setFont(font1);
        Password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, Password);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        PasswordConf = new QLineEdit(groupBox);
        PasswordConf->setObjectName(QString::fromUtf8("PasswordConf"));
        PasswordConf->setFont(font1);
        PasswordConf->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(4, QFormLayout::FieldRole, PasswordConf);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        Viewer = new QRadioButton(groupBox);
        Viewer->setObjectName(QString::fromUtf8("Viewer"));
        Viewer->setFont(font1);

        formLayout->setWidget(5, QFormLayout::FieldRole, Viewer);

        Curator = new QRadioButton(groupBox);
        Curator->setObjectName(QString::fromUtf8("Curator"));
        Curator->setFont(font1);

        formLayout->setWidget(6, QFormLayout::FieldRole, Curator);

        pushButton = new QPushButton(AccountEdit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(510, 530, 281, 31));
        pushButton_2 = new QPushButton(AccountEdit);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 530, 281, 31));
        logoMM = new QLabel(AccountEdit);
        logoMM->setObjectName(QString::fromUtf8("logoMM"));
        logoMM->setGeometry(QRect(700, 0, 111, 71));
#if QT_CONFIG(shortcut)
        label_2->setBuddy(Name);
        label_4->setBuddy(Email);
        label_3->setBuddy(Username);
        label_5->setBuddy(Password);
        label_6->setBuddy(PasswordConf);
#endif // QT_CONFIG(shortcut)

        retranslateUi(AccountEdit);

        QMetaObject::connectSlotsByName(AccountEdit);
    } // setupUi

    void retranslateUi(QDialog *AccountEdit)
    {
        AccountEdit->setWindowTitle(QCoreApplication::translate("AccountEdit", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AccountEdit", "<h1>Account</h1>", nullptr));
        homeButton->setText(QCoreApplication::translate("AccountEdit", "Home", nullptr));
        mListButton->setText(QCoreApplication::translate("AccountEdit", "Museum list", nullptr));
        itemsViewedButton->setText(QCoreApplication::translate("AccountEdit", "Items Viewed", nullptr));
        myCommentsButton->setText(QCoreApplication::translate("AccountEdit", "My Comments", nullptr));
        accountButton->setText(QCoreApplication::translate("AccountEdit", "Account", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AccountEdit", "Account Edit", nullptr));
        label_2->setText(QCoreApplication::translate("AccountEdit", "Name", nullptr));
        label_4->setText(QCoreApplication::translate("AccountEdit", "Email", nullptr));
        label_3->setText(QCoreApplication::translate("AccountEdit", "Username", nullptr));
        label_5->setText(QCoreApplication::translate("AccountEdit", "Password", nullptr));
        label_6->setText(QCoreApplication::translate("AccountEdit", "Confirm Password", nullptr));
        label_7->setText(QCoreApplication::translate("AccountEdit", "Account Type", nullptr));
        Viewer->setText(QCoreApplication::translate("AccountEdit", "Viewer", nullptr));
        Curator->setText(QCoreApplication::translate("AccountEdit", "Curator", nullptr));
        pushButton->setText(QCoreApplication::translate("AccountEdit", "Save Changes", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AccountEdit", "Cancel", nullptr));
        logoMM->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AccountEdit: public Ui_AccountEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTEDIT_H
