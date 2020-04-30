/********************************************************************************
** Form generated from reading UI file 'museumpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSEUMPAGE_H
#define UI_MUSEUMPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MuseumPage
{
public:
    QLabel *muName;
    QLabel *logoMM;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *homeButton;
    QPushButton *mListButton;
    QPushButton *itemsViewedButton;
    QPushButton *myCommentsButton;
    QPushButton *accountButton;
    QLabel *image1;
    QLabel *image4;
    QLabel *image7;
    QLabel *image2;
    QLabel *image3;
    QLabel *image5;
    QLabel *image8;
    QLabel *image6;
    QLabel *image9;
    QPushButton *name_1;
    QPushButton *name_2;
    QPushButton *name_3;
    QPushButton *name_4;
    QPushButton *name_5;
    QPushButton *name_6;
    QPushButton *name_7;
    QPushButton *name_8;
    QPushButton *name_9;
    QPushButton *next;
    QPushButton *previous;
    QPushButton *pushButton;

    void setupUi(QDialog *MuseumPage)
    {
        if (MuseumPage->objectName().isEmpty())
            MuseumPage->setObjectName(QString::fromUtf8("MuseumPage"));
        MuseumPage->resize(820, 600);
        muName = new QLabel(MuseumPage);
        muName->setObjectName(QString::fromUtf8("muName"));
        muName->setGeometry(QRect(10, 10, 651, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next Condensed"));
        font.setPointSize(25);
        font.setItalic(false);
        muName->setFont(font);
        logoMM = new QLabel(MuseumPage);
        logoMM->setObjectName(QString::fromUtf8("logoMM"));
        logoMM->setGeometry(QRect(700, 0, 111, 71));
        layoutWidget = new QWidget(MuseumPage);
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

        image1 = new QLabel(MuseumPage);
        image1->setObjectName(QString::fromUtf8("image1"));
        image1->setGeometry(QRect(50, 110, 111, 111));
        image4 = new QLabel(MuseumPage);
        image4->setObjectName(QString::fromUtf8("image4"));
        image4->setGeometry(QRect(50, 260, 111, 111));
        image7 = new QLabel(MuseumPage);
        image7->setObjectName(QString::fromUtf8("image7"));
        image7->setGeometry(QRect(50, 410, 111, 111));
        image2 = new QLabel(MuseumPage);
        image2->setObjectName(QString::fromUtf8("image2"));
        image2->setGeometry(QRect(340, 110, 111, 111));
        image3 = new QLabel(MuseumPage);
        image3->setObjectName(QString::fromUtf8("image3"));
        image3->setGeometry(QRect(650, 110, 111, 111));
        image5 = new QLabel(MuseumPage);
        image5->setObjectName(QString::fromUtf8("image5"));
        image5->setGeometry(QRect(340, 260, 111, 111));
        image8 = new QLabel(MuseumPage);
        image8->setObjectName(QString::fromUtf8("image8"));
        image8->setGeometry(QRect(340, 410, 111, 111));
        image6 = new QLabel(MuseumPage);
        image6->setObjectName(QString::fromUtf8("image6"));
        image6->setGeometry(QRect(650, 260, 111, 111));
        image9 = new QLabel(MuseumPage);
        image9->setObjectName(QString::fromUtf8("image9"));
        image9->setGeometry(QRect(650, 410, 111, 111));
        name_1 = new QPushButton(MuseumPage);
        name_1->setObjectName(QString::fromUtf8("name_1"));
        name_1->setGeometry(QRect(0, 220, 211, 32));
        name_1->setCursor(QCursor(Qt::PointingHandCursor));
        name_1->setStyleSheet(QString::fromUtf8("background-color: rgb(50,50,50)"));
        name_1->setFlat(true);
        name_2 = new QPushButton(MuseumPage);
        name_2->setObjectName(QString::fromUtf8("name_2"));
        name_2->setGeometry(QRect(290, 220, 211, 32));
        name_2->setCursor(QCursor(Qt::PointingHandCursor));
        name_2->setStyleSheet(QString::fromUtf8("background-color: rgb(50,50,50)"));
        name_2->setFlat(true);
        name_3 = new QPushButton(MuseumPage);
        name_3->setObjectName(QString::fromUtf8("name_3"));
        name_3->setGeometry(QRect(600, 220, 211, 32));
        name_3->setCursor(QCursor(Qt::PointingHandCursor));
        name_3->setStyleSheet(QString::fromUtf8("background-color: rgb(50,50,50)"));
        name_3->setFlat(true);
        name_4 = new QPushButton(MuseumPage);
        name_4->setObjectName(QString::fromUtf8("name_4"));
        name_4->setGeometry(QRect(0, 370, 211, 32));
        name_4->setCursor(QCursor(Qt::PointingHandCursor));
        name_4->setStyleSheet(QString::fromUtf8("background-color: rgb(50,50,50)"));
        name_4->setFlat(true);
        name_5 = new QPushButton(MuseumPage);
        name_5->setObjectName(QString::fromUtf8("name_5"));
        name_5->setGeometry(QRect(290, 370, 211, 32));
        name_5->setCursor(QCursor(Qt::PointingHandCursor));
        name_5->setStyleSheet(QString::fromUtf8("background-color: rgb(50,50,50)"));
        name_5->setFlat(true);
        name_6 = new QPushButton(MuseumPage);
        name_6->setObjectName(QString::fromUtf8("name_6"));
        name_6->setGeometry(QRect(600, 370, 211, 32));
        name_6->setCursor(QCursor(Qt::PointingHandCursor));
        name_6->setStyleSheet(QString::fromUtf8("background-color: rgb(50,50,50)"));
        name_6->setFlat(true);
        name_7 = new QPushButton(MuseumPage);
        name_7->setObjectName(QString::fromUtf8("name_7"));
        name_7->setGeometry(QRect(0, 520, 211, 32));
        name_7->setCursor(QCursor(Qt::PointingHandCursor));
        name_7->setStyleSheet(QString::fromUtf8("background-color: rgb(50,50,50)"));
        name_7->setFlat(true);
        name_8 = new QPushButton(MuseumPage);
        name_8->setObjectName(QString::fromUtf8("name_8"));
        name_8->setGeometry(QRect(290, 520, 211, 32));
        name_8->setCursor(QCursor(Qt::PointingHandCursor));
        name_8->setStyleSheet(QString::fromUtf8("background-color: rgb(50,50,50)"));
        name_8->setFlat(true);
        name_9 = new QPushButton(MuseumPage);
        name_9->setObjectName(QString::fromUtf8("name_9"));
        name_9->setGeometry(QRect(600, 520, 211, 32));
        name_9->setCursor(QCursor(Qt::PointingHandCursor));
        name_9->setStyleSheet(QString::fromUtf8("background-color: rgb(50,50,50)"));
        name_9->setFlat(true);
        next = new QPushButton(MuseumPage);
        next->setObjectName(QString::fromUtf8("next"));
        next->setGeometry(QRect(700, 560, 113, 32));
        previous = new QPushButton(MuseumPage);
        previous->setObjectName(QString::fromUtf8("previous"));
        previous->setGeometry(QRect(600, 560, 113, 32));
        pushButton = new QPushButton(MuseumPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 560, 181, 31));

        retranslateUi(MuseumPage);

        QMetaObject::connectSlotsByName(MuseumPage);
    } // setupUi

    void retranslateUi(QDialog *MuseumPage)
    {
        MuseumPage->setWindowTitle(QCoreApplication::translate("MuseumPage", "Dialog", nullptr));
        muName->setText(QCoreApplication::translate("MuseumPage", "<h1>Museum Name</h1>", nullptr));
        logoMM->setText(QString());
        homeButton->setText(QCoreApplication::translate("MuseumPage", "Home", nullptr));
        mListButton->setText(QCoreApplication::translate("MuseumPage", "Museum list", nullptr));
        itemsViewedButton->setText(QCoreApplication::translate("MuseumPage", "Items Viewed", nullptr));
        myCommentsButton->setText(QCoreApplication::translate("MuseumPage", "My Comments", nullptr));
        accountButton->setText(QCoreApplication::translate("MuseumPage", "Account", nullptr));
        image1->setText(QCoreApplication::translate("MuseumPage", "Item Image 1", nullptr));
        image4->setText(QCoreApplication::translate("MuseumPage", "Item Image 4", nullptr));
        image7->setText(QCoreApplication::translate("MuseumPage", "Item Image 7", nullptr));
        image2->setText(QCoreApplication::translate("MuseumPage", "Item Image 2", nullptr));
        image3->setText(QCoreApplication::translate("MuseumPage", "Item Image 3", nullptr));
        image5->setText(QCoreApplication::translate("MuseumPage", "Item Image 5", nullptr));
        image8->setText(QCoreApplication::translate("MuseumPage", "Item Image 8", nullptr));
        image6->setText(QCoreApplication::translate("MuseumPage", "Item Image 6", nullptr));
        image9->setText(QCoreApplication::translate("MuseumPage", "Item Image 9", nullptr));
        name_1->setText(QCoreApplication::translate("MuseumPage", "ItemName1", nullptr));
        name_2->setText(QCoreApplication::translate("MuseumPage", "ItemName2", nullptr));
        name_3->setText(QCoreApplication::translate("MuseumPage", "ItemName3", nullptr));
        name_4->setText(QCoreApplication::translate("MuseumPage", "ItemName4", nullptr));
        name_5->setText(QCoreApplication::translate("MuseumPage", "ItemName5", nullptr));
        name_6->setText(QCoreApplication::translate("MuseumPage", "ItemName6", nullptr));
        name_7->setText(QCoreApplication::translate("MuseumPage", "ItemName7", nullptr));
        name_8->setText(QCoreApplication::translate("MuseumPage", "ItemName8", nullptr));
        name_9->setText(QCoreApplication::translate("MuseumPage", "ItemName9", nullptr));
        next->setText(QCoreApplication::translate("MuseumPage", "Next Page", nullptr));
        previous->setText(QCoreApplication::translate("MuseumPage", "Previous", nullptr));
        pushButton->setText(QCoreApplication::translate("MuseumPage", "Back to List", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MuseumPage: public Ui_MuseumPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSEUMPAGE_H
