/********************************************************************************
** Form generated from reading UI file 'mycomments.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCOMMENTS_H
#define UI_MYCOMMENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyComments
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

    void setupUi(QDialog *MyComments)
    {
        if (MyComments->objectName().isEmpty())
            MyComments->setObjectName(QString::fromUtf8("MyComments"));
        MyComments->resize(820, 600);
        label = new QLabel(MyComments);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 291, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next Condensed"));
        font.setPointSize(25);
        font.setItalic(false);
        label->setFont(font);
        layoutWidget = new QWidget(MyComments);
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

        logoMM = new QLabel(MyComments);
        logoMM->setObjectName(QString::fromUtf8("logoMM"));
        logoMM->setGeometry(QRect(700, 0, 111, 71));

        retranslateUi(MyComments);

        QMetaObject::connectSlotsByName(MyComments);
    } // setupUi

    void retranslateUi(QDialog *MyComments)
    {
        MyComments->setWindowTitle(QCoreApplication::translate("MyComments", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MyComments", "<h1>My Comments</h1>", nullptr));
        homeButton->setText(QCoreApplication::translate("MyComments", "Home", nullptr));
        mListButton->setText(QCoreApplication::translate("MyComments", "Museum list", nullptr));
        itemsViewedButton->setText(QCoreApplication::translate("MyComments", "Items Viewed", nullptr));
        myCommentsButton->setText(QCoreApplication::translate("MyComments", "My Comments", nullptr));
        accountButton->setText(QCoreApplication::translate("MyComments", "Account", nullptr));
        logoMM->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MyComments: public Ui_MyComments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCOMMENTS_H
