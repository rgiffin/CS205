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
#include <QtWidgets/QFrame>
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
    QLabel *image1;
    QLabel *image2;
    QLabel *image3;
    QFrame *line;
    QFrame *line_2;
    QLabel *comment1;
    QLabel *comment2;
    QLabel *comment3;
    QLabel *item1;
    QLabel *item1_2;
    QLabel *item3;
    QPushButton *next;
    QPushButton *previous;

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
        image1 = new QLabel(MyComments);
        image1->setObjectName(QString::fromUtf8("image1"));
        image1->setGeometry(QRect(520, 140, 121, 121));
        image1->setAlignment(Qt::AlignCenter);
        image2 = new QLabel(MyComments);
        image2->setObjectName(QString::fromUtf8("image2"));
        image2->setGeometry(QRect(520, 290, 121, 121));
        image2->setAlignment(Qt::AlignCenter);
        image3 = new QLabel(MyComments);
        image3->setObjectName(QString::fromUtf8("image3"));
        image3->setGeometry(QRect(520, 430, 121, 121));
        image3->setAlignment(Qt::AlignCenter);
        line = new QFrame(MyComments);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 270, 801, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(MyComments);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 410, 801, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        comment1 = new QLabel(MyComments);
        comment1->setObjectName(QString::fromUtf8("comment1"));
        comment1->setGeometry(QRect(30, 150, 451, 121));
        comment1->setWordWrap(true);
        comment2 = new QLabel(MyComments);
        comment2->setObjectName(QString::fromUtf8("comment2"));
        comment2->setGeometry(QRect(30, 290, 451, 121));
        comment2->setWordWrap(true);
        comment3 = new QLabel(MyComments);
        comment3->setObjectName(QString::fromUtf8("comment3"));
        comment3->setGeometry(QRect(30, 430, 451, 121));
        comment3->setWordWrap(true);
        item1 = new QLabel(MyComments);
        item1->setObjectName(QString::fromUtf8("item1"));
        item1->setGeometry(QRect(650, 160, 141, 81));
        item1->setWordWrap(true);
        item1_2 = new QLabel(MyComments);
        item1_2->setObjectName(QString::fromUtf8("item1_2"));
        item1_2->setGeometry(QRect(650, 310, 141, 81));
        item1_2->setWordWrap(true);
        item3 = new QLabel(MyComments);
        item3->setObjectName(QString::fromUtf8("item3"));
        item3->setGeometry(QRect(650, 450, 141, 81));
        item3->setWordWrap(true);
        next = new QPushButton(MyComments);
        next->setObjectName(QString::fromUtf8("next"));
        next->setGeometry(QRect(650, 550, 141, 41));
        previous = new QPushButton(MyComments);
        previous->setObjectName(QString::fromUtf8("previous"));
        previous->setGeometry(QRect(520, 550, 141, 41));

        retranslateUi(MyComments);

        QMetaObject::connectSlotsByName(MyComments);
    } // setupUi

    void retranslateUi(QDialog *MyComments)
    {
        MyComments->setWindowTitle(QCoreApplication::translate("MyComments", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MyComments", "<h1>My Comments</h1>", nullptr));
        homeButton->setText(QCoreApplication::translate("MyComments", "Home", nullptr));
        mListButton->setText(QCoreApplication::translate("MyComments", "Museum list", nullptr));
        itemsViewedButton->setText(QCoreApplication::translate("MyComments", "Search", nullptr));
        myCommentsButton->setText(QCoreApplication::translate("MyComments", "My Comments", nullptr));
        accountButton->setText(QCoreApplication::translate("MyComments", "Account", nullptr));
        logoMM->setText(QString());
        image1->setText(QCoreApplication::translate("MyComments", "TextLabel", nullptr));
        image2->setText(QCoreApplication::translate("MyComments", "TextLabel", nullptr));
        image3->setText(QCoreApplication::translate("MyComments", "TextLabel", nullptr));
        comment1->setText(QCoreApplication::translate("MyComments", "Comment", nullptr));
        comment2->setText(QCoreApplication::translate("MyComments", "Comment", nullptr));
        comment3->setText(QCoreApplication::translate("MyComments", "Comment", nullptr));
        item1->setText(QCoreApplication::translate("MyComments", "Item:", nullptr));
        item1_2->setText(QCoreApplication::translate("MyComments", "Item:", nullptr));
        item3->setText(QCoreApplication::translate("MyComments", "Item:", nullptr));
        next->setText(QCoreApplication::translate("MyComments", "Next Page", nullptr));
        previous->setText(QCoreApplication::translate("MyComments", "Previous Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyComments: public Ui_MyComments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCOMMENTS_H
