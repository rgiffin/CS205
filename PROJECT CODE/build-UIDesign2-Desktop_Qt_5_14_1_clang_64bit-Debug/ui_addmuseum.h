/********************************************************************************
** Form generated from reading UI file 'addmuseum.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMUSEUM_H
#define UI_ADDMUSEUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddMuseum
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
    QLabel *logoMM_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *museumName;
    QLabel *label_3;
    QPlainTextEdit *museumDescription;
    QLabel *label_4;
    QLineEdit *museumType;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *AddMuseum)
    {
        if (AddMuseum->objectName().isEmpty())
            AddMuseum->setObjectName(QString::fromUtf8("AddMuseum"));
        AddMuseum->resize(820, 600);
        label = new QLabel(AddMuseum);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 271, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next Condensed"));
        font.setPointSize(25);
        font.setItalic(false);
        label->setFont(font);
        layoutWidget = new QWidget(AddMuseum);
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

        logoMM_2 = new QLabel(AddMuseum);
        logoMM_2->setObjectName(QString::fromUtf8("logoMM_2"));
        logoMM_2->setGeometry(QRect(700, 0, 111, 71));
        groupBox = new QGroupBox(AddMuseum);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 120, 771, 421));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        museumName = new QLineEdit(groupBox);
        museumName->setObjectName(QString::fromUtf8("museumName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, museumName);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        museumDescription = new QPlainTextEdit(groupBox);
        museumDescription->setObjectName(QString::fromUtf8("museumDescription"));

        formLayout->setWidget(1, QFormLayout::FieldRole, museumDescription);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        museumType = new QLineEdit(groupBox);
        museumType->setObjectName(QString::fromUtf8("museumType"));

        formLayout->setWidget(2, QFormLayout::FieldRole, museumType);

        pushButton_2 = new QPushButton(AddMuseum);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 540, 271, 32));
        pushButton = new QPushButton(AddMuseum);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(510, 540, 271, 32));

        retranslateUi(AddMuseum);

        QMetaObject::connectSlotsByName(AddMuseum);
    } // setupUi

    void retranslateUi(QDialog *AddMuseum)
    {
        AddMuseum->setWindowTitle(QCoreApplication::translate("AddMuseum", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddMuseum", "<h1>Add Museum</h1>", nullptr));
        homeButton->setText(QCoreApplication::translate("AddMuseum", "Home", nullptr));
        mListButton->setText(QCoreApplication::translate("AddMuseum", "Museum list", nullptr));
        itemsViewedButton->setText(QCoreApplication::translate("AddMuseum", "Items Viewed", nullptr));
        myCommentsButton->setText(QCoreApplication::translate("AddMuseum", "My Comments", nullptr));
        accountButton->setText(QCoreApplication::translate("AddMuseum", "Account", nullptr));
        logoMM_2->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("AddMuseum", "New Museum", nullptr));
        label_2->setText(QCoreApplication::translate("AddMuseum", "Museum Name", nullptr));
        label_3->setText(QCoreApplication::translate("AddMuseum", "Museum Description", nullptr));
        label_4->setText(QCoreApplication::translate("AddMuseum", "Museum Type", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddMuseum", "Cancel", nullptr));
        pushButton->setText(QCoreApplication::translate("AddMuseum", "Add Museum", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddMuseum: public Ui_AddMuseum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMUSEUM_H
