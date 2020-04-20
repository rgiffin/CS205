/********************************************************************************
** Form generated from reading UI file 'museumlist.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSEUMLIST_H
#define UI_MUSEUMLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MuseumList
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
    QLabel *logoMM;

    void setupUi(QDialog *MuseumList)
    {
        if (MuseumList->objectName().isEmpty())
            MuseumList->setObjectName(QString::fromUtf8("MuseumList"));
        MuseumList->resize(820, 600);
        label = new QLabel(MuseumList);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 291, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next Condensed"));
        font.setPointSize(25);
        font.setItalic(false);
        label->setFont(font);
        layoutWidget = new QWidget(MuseumList);
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

        logoMM = new QLabel(MuseumList);
        logoMM->setObjectName(QString::fromUtf8("logoMM"));
        logoMM->setGeometry(QRect(700, 0, 111, 71));

        retranslateUi(MuseumList);

        QMetaObject::connectSlotsByName(MuseumList);
    } // setupUi

    void retranslateUi(QDialog *MuseumList)
    {
        MuseumList->setWindowTitle(QCoreApplication::translate("MuseumList", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MuseumList", "<h1>Museum List</h1>", nullptr));
        homeButton->setText(QCoreApplication::translate("MuseumList", "Home", nullptr));
        mListButton->setText(QCoreApplication::translate("MuseumList", "Museum list", nullptr));
        itemsViewedButton->setText(QCoreApplication::translate("MuseumList", "Items Viewed", nullptr));
        myCommentsButton->setText(QCoreApplication::translate("MuseumList", "My Comments", nullptr));
        accountButton->setText(QCoreApplication::translate("MuseumList", "Account", nullptr));
        logoMM->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MuseumList: public Ui_MuseumList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSEUMLIST_H
