/********************************************************************************
** Form generated from reading UI file 'additem.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEM_H
#define UI_ADDITEM_H

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

class Ui_AddItem
{
public:
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *itemName;
    QLabel *label_3;
    QPlainTextEdit *itemDescription;
    QLabel *label_4;
    QLineEdit *collection;
    QPushButton *addImage;
    QLabel *label_6;
    QLineEdit *artist;
    QLabel *label_7;
    QLineEdit *museum;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *homeButton;
    QPushButton *mListButton;
    QPushButton *itemsViewedButton;
    QPushButton *myCommentsButton;
    QPushButton *accountButton;
    QLabel *label;
    QLabel *logoMM_2;
    QLabel *itemImage;
    QLabel *label_5;

    void setupUi(QDialog *AddItem)
    {
        if (AddItem->objectName().isEmpty())
            AddItem->setObjectName(QString::fromUtf8("AddItem"));
        AddItem->resize(820, 600);
        groupBox = new QGroupBox(AddItem);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 120, 421, 421));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        itemName = new QLineEdit(groupBox);
        itemName->setObjectName(QString::fromUtf8("itemName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, itemName);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        itemDescription = new QPlainTextEdit(groupBox);
        itemDescription->setObjectName(QString::fromUtf8("itemDescription"));

        formLayout->setWidget(1, QFormLayout::FieldRole, itemDescription);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        collection = new QLineEdit(groupBox);
        collection->setObjectName(QString::fromUtf8("collection"));

        formLayout->setWidget(4, QFormLayout::FieldRole, collection);

        addImage = new QPushButton(groupBox);
        addImage->setObjectName(QString::fromUtf8("addImage"));

        formLayout->setWidget(5, QFormLayout::FieldRole, addImage);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        artist = new QLineEdit(groupBox);
        artist->setObjectName(QString::fromUtf8("artist"));

        formLayout->setWidget(2, QFormLayout::FieldRole, artist);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        museum = new QLineEdit(groupBox);
        museum->setObjectName(QString::fromUtf8("museum"));

        formLayout->setWidget(3, QFormLayout::FieldRole, museum);

        pushButton = new QPushButton(AddItem);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(510, 540, 271, 32));
        pushButton_2 = new QPushButton(AddItem);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 540, 271, 32));
        layoutWidget = new QWidget(AddItem);
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

        label = new QLabel(AddItem);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 271, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next Condensed"));
        font.setPointSize(25);
        font.setItalic(false);
        label->setFont(font);
        logoMM_2 = new QLabel(AddItem);
        logoMM_2->setObjectName(QString::fromUtf8("logoMM_2"));
        logoMM_2->setGeometry(QRect(700, 0, 111, 71));
        itemImage = new QLabel(AddItem);
        itemImage->setObjectName(QString::fromUtf8("itemImage"));
        itemImage->setGeometry(QRect(450, 180, 321, 251));
        label_5 = new QLabel(AddItem);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(450, 150, 111, 21));
        QFont font1;
        font1.setPointSize(19);
        label_5->setFont(font1);

        retranslateUi(AddItem);

        QMetaObject::connectSlotsByName(AddItem);
    } // setupUi

    void retranslateUi(QDialog *AddItem)
    {
        AddItem->setWindowTitle(QCoreApplication::translate("AddItem", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AddItem", "New Item", nullptr));
        label_2->setText(QCoreApplication::translate("AddItem", "Item Name", nullptr));
        label_3->setText(QCoreApplication::translate("AddItem", "Item Description", nullptr));
        label_4->setText(QCoreApplication::translate("AddItem", "Item Collection", nullptr));
        addImage->setText(QCoreApplication::translate("AddItem", "Add Image", nullptr));
        label_6->setText(QCoreApplication::translate("AddItem", "Artist/Creator", nullptr));
        label_7->setText(QCoreApplication::translate("AddItem", "Museum to add Item", nullptr));
        pushButton->setText(QCoreApplication::translate("AddItem", "Add Item", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddItem", "Cancel", nullptr));
        homeButton->setText(QCoreApplication::translate("AddItem", "Home", nullptr));
        mListButton->setText(QCoreApplication::translate("AddItem", "Museum list", nullptr));
        itemsViewedButton->setText(QCoreApplication::translate("AddItem", "Items Viewed", nullptr));
        myCommentsButton->setText(QCoreApplication::translate("AddItem", "My Comments", nullptr));
        accountButton->setText(QCoreApplication::translate("AddItem", "Account", nullptr));
        label->setText(QCoreApplication::translate("AddItem", "<h1>Add Item</h1>", nullptr));
        logoMM_2->setText(QString());
        itemImage->setText(QCoreApplication::translate("AddItem", "Image Not Selected", nullptr));
        label_5->setText(QCoreApplication::translate("AddItem", "Item Image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddItem: public Ui_AddItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEM_H
