/********************************************************************************
** Form generated from reading UI file 'itemview.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMVIEW_H
#define UI_ITEMVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemView
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *homeButton;
    QPushButton *mListButton;
    QPushButton *itemsViewedButton;
    QPushButton *myCommentsButton;
    QPushButton *accountButton;
    QLabel *logoMM;
    QLabel *muName;
    QLabel *image;
    QLabel *iName;
    QLabel *iCreator;
    QLabel *description;
    QLabel *label;
    QLabel *label_2;
    QLabel *user;
    QLabel *comment;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *ItemView)
    {
        if (ItemView->objectName().isEmpty())
            ItemView->setObjectName(QString::fromUtf8("ItemView"));
        ItemView->resize(820, 600);
        layoutWidget = new QWidget(ItemView);
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

        logoMM = new QLabel(ItemView);
        logoMM->setObjectName(QString::fromUtf8("logoMM"));
        logoMM->setGeometry(QRect(700, 0, 111, 71));
        muName = new QLabel(ItemView);
        muName->setObjectName(QString::fromUtf8("muName"));
        muName->setGeometry(QRect(10, 10, 651, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next Condensed"));
        font.setPointSize(25);
        font.setItalic(false);
        muName->setFont(font);
        image = new QLabel(ItemView);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(80, 120, 311, 311));
        iName = new QLabel(ItemView);
        iName->setObjectName(QString::fromUtf8("iName"));
        iName->setGeometry(QRect(80, 440, 311, 41));
        iCreator = new QLabel(ItemView);
        iCreator->setObjectName(QString::fromUtf8("iCreator"));
        iCreator->setGeometry(QRect(80, 490, 311, 41));
        description = new QLabel(ItemView);
        description->setObjectName(QString::fromUtf8("description"));
        description->setGeometry(QRect(400, 140, 381, 181));
        label = new QLabel(ItemView);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(400, 320, 81, 20));
        label_2 = new QLabel(ItemView);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 120, 91, 16));
        user = new QLabel(ItemView);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(400, 350, 141, 16));
        comment = new QLabel(ItemView);
        comment->setObjectName(QString::fromUtf8("comment"));
        comment->setGeometry(QRect(470, 370, 331, 91));
        pushButton = new QPushButton(ItemView);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(692, 470, 121, 32));
        pushButton_2 = new QPushButton(ItemView);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(680, 550, 131, 41));
        pushButton_3 = new QPushButton(ItemView);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(550, 550, 131, 41));
        pushButton_4 = new QPushButton(ItemView);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(380, 550, 131, 41));

        retranslateUi(ItemView);

        QMetaObject::connectSlotsByName(ItemView);
    } // setupUi

    void retranslateUi(QDialog *ItemView)
    {
        ItemView->setWindowTitle(QCoreApplication::translate("ItemView", "Dialog", nullptr));
        homeButton->setText(QCoreApplication::translate("ItemView", "Home", nullptr));
        mListButton->setText(QCoreApplication::translate("ItemView", "Museum list", nullptr));
        itemsViewedButton->setText(QCoreApplication::translate("ItemView", "Items Viewed", nullptr));
        myCommentsButton->setText(QCoreApplication::translate("ItemView", "My Comments", nullptr));
        accountButton->setText(QCoreApplication::translate("ItemView", "Account", nullptr));
        logoMM->setText(QString());
        muName->setText(QCoreApplication::translate("ItemView", "<h1>Museum Name</h1>", nullptr));
        image->setText(QCoreApplication::translate("ItemView", "Image", nullptr));
        iName->setText(QCoreApplication::translate("ItemView", "Item Name:", nullptr));
        iCreator->setText(QCoreApplication::translate("ItemView", "Creator:", nullptr));
        description->setText(QCoreApplication::translate("ItemView", "Description", nullptr));
        label->setText(QCoreApplication::translate("ItemView", "Comments:", nullptr));
        label_2->setText(QCoreApplication::translate("ItemView", "Description:", nullptr));
        user->setText(QCoreApplication::translate("ItemView", "User:", nullptr));
        comment->setText(QCoreApplication::translate("ItemView", "Comment", nullptr));
        pushButton->setText(QCoreApplication::translate("ItemView", "Next Comment", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ItemView", "Next Item", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ItemView", "Previous Item", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ItemView", "Back To Museum", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemView: public Ui_ItemView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMVIEW_H
