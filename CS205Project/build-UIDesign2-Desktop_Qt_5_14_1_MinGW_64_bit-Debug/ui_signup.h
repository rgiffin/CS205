/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QLabel *label;
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
    QCheckBox *Viewer;
    QCheckBox *Curator;
    QPushButton *pushButton;
    QLabel *RLogo;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QString::fromUtf8("SignUp"));
        SignUp->resize(640, 486);
        label = new QLabel(SignUp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 161, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next Condensed"));
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        groupBox = new QGroupBox(SignUp);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 110, 631, 291));
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

        Viewer = new QCheckBox(groupBox);
        Viewer->setObjectName(QString::fromUtf8("Viewer"));
        Viewer->setFont(font1);

        formLayout->setWidget(5, QFormLayout::FieldRole, Viewer);

        Curator = new QCheckBox(groupBox);
        Curator->setObjectName(QString::fromUtf8("Curator"));
        Curator->setFont(font1);

        formLayout->setWidget(6, QFormLayout::FieldRole, Curator);

        pushButton = new QPushButton(SignUp);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(430, 420, 151, 31));
        RLogo = new QLabel(SignUp);
        RLogo->setObjectName(QString::fromUtf8("RLogo"));
        RLogo->setGeometry(QRect(460, 10, 171, 111));
#if QT_CONFIG(shortcut)
        label_2->setBuddy(Name);
        label_4->setBuddy(Email);
        label_3->setBuddy(Username);
        label_5->setBuddy(Password);
        label_6->setBuddy(PasswordConf);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SignUp", "<h1>Sign Up</h1>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SignUp", "Account Information", nullptr));
        label_2->setText(QCoreApplication::translate("SignUp", "Name", nullptr));
        label_4->setText(QCoreApplication::translate("SignUp", "Email", nullptr));
        label_3->setText(QCoreApplication::translate("SignUp", "Username", nullptr));
        label_5->setText(QCoreApplication::translate("SignUp", "Password", nullptr));
        label_6->setText(QCoreApplication::translate("SignUp", "Confirm Password", nullptr));
        label_7->setText(QCoreApplication::translate("SignUp", "Account Type", nullptr));
        Viewer->setText(QCoreApplication::translate("SignUp", "Viewer", nullptr));
        Curator->setText(QCoreApplication::translate("SignUp", "Curator", nullptr));
        pushButton->setText(QCoreApplication::translate("SignUp", "Sign Up", nullptr));
        RLogo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
