/********************************************************************************
** Form generated from reading UI file 'itemsviewed.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMSVIEWED_H
#define UI_ITEMSVIEWED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemsViewed
{
public:
    QLabel *logoMM;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *homeButton;
    QPushButton *mListButton;
    QPushButton *itemsViewedButton;
    QPushButton *myCommentsButton;
    QPushButton *accountButton;
    QLabel *label;

    void setupUi(QDialog *ItemsViewed)
    {
        if (ItemsViewed->objectName().isEmpty())
            ItemsViewed->setObjectName(QString::fromUtf8("ItemsViewed"));
        ItemsViewed->resize(820, 600);
        logoMM = new QLabel(ItemsViewed);
        logoMM->setObjectName(QString::fromUtf8("logoMM"));
        logoMM->setGeometry(QRect(700, 0, 111, 71));
        layoutWidget = new QWidget(ItemsViewed);
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

        label = new QLabel(ItemsViewed);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 291, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next Condensed"));
        font.setPointSize(25);
        font.setItalic(false);
        label->setFont(font);

        retranslateUi(ItemsViewed);

        QMetaObject::connectSlotsByName(ItemsViewed);
    } // setupUi

    void retranslateUi(QDialog *ItemsViewed)
    {
        ItemsViewed->setWindowTitle(QCoreApplication::translate("ItemsViewed", "Dialog", nullptr));
        logoMM->setText(QString());
        homeButton->setText(QCoreApplication::translate("ItemsViewed", "Home", nullptr));
        mListButton->setText(QCoreApplication::translate("ItemsViewed", "Museum list", nullptr));
        itemsViewedButton->setText(QCoreApplication::translate("ItemsViewed", "Items Viewed", nullptr));
        myCommentsButton->setText(QCoreApplication::translate("ItemsViewed", "My Comments", nullptr));
        accountButton->setText(QCoreApplication::translate("ItemsViewed", "Account", nullptr));
        label->setText(QCoreApplication::translate("ItemsViewed", "<h1>Items Viewed</h1>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemsViewed: public Ui_ItemsViewed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMSVIEWED_H
