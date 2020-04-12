/********************************************************************************
** Form generated from reading UI file 'museummain.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSEUMMAIN_H
#define UI_MUSEUMMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MuseumMain
{
public:
    QLabel *label;
    QLabel *logoMM;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *mName1;
    QLabel *description1;
    QLabel *image1_1;
    QLabel *image2_1;
    QLabel *image3_1;
    QLabel *mName2;
    QLabel *description2;
    QLabel *image1_2;
    QLabel *image2_2;
    QLabel *image3_2;
    QLabel *mName3;
    QLabel *description3;
    QLabel *image1_3;
    QLabel *image2_3;
    QLabel *image3_3;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *homeButton;
    QPushButton *mListButton;
    QPushButton *itemsViewedButton;
    QPushButton *myCommentsButton;
    QPushButton *accountButton;

    void setupUi(QDialog *MuseumMain)
    {
        if (MuseumMain->objectName().isEmpty())
            MuseumMain->setObjectName(QString::fromUtf8("MuseumMain"));
        MuseumMain->resize(820, 600);
        label = new QLabel(MuseumMain);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 291, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next Condensed"));
        font.setPointSize(25);
        font.setItalic(false);
        label->setFont(font);
        logoMM = new QLabel(MuseumMain);
        logoMM->setObjectName(QString::fromUtf8("logoMM"));
        logoMM->setGeometry(QRect(700, 0, 111, 71));
        widget = new QWidget(MuseumMain);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 110, 791, 481));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mName1 = new QLabel(widget);
        mName1->setObjectName(QString::fromUtf8("mName1"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Skia"));
        font1.setPointSize(20);
        mName1->setFont(font1);

        gridLayout->addWidget(mName1, 0, 0, 1, 1);

        description1 = new QLabel(widget);
        description1->setObjectName(QString::fromUtf8("description1"));

        gridLayout->addWidget(description1, 1, 0, 1, 1);

        image1_1 = new QLabel(widget);
        image1_1->setObjectName(QString::fromUtf8("image1_1"));

        gridLayout->addWidget(image1_1, 1, 1, 1, 1);

        image2_1 = new QLabel(widget);
        image2_1->setObjectName(QString::fromUtf8("image2_1"));

        gridLayout->addWidget(image2_1, 1, 2, 1, 1);

        image3_1 = new QLabel(widget);
        image3_1->setObjectName(QString::fromUtf8("image3_1"));

        gridLayout->addWidget(image3_1, 1, 3, 1, 1);

        mName2 = new QLabel(widget);
        mName2->setObjectName(QString::fromUtf8("mName2"));
        mName2->setFont(font1);

        gridLayout->addWidget(mName2, 2, 0, 1, 1);

        description2 = new QLabel(widget);
        description2->setObjectName(QString::fromUtf8("description2"));

        gridLayout->addWidget(description2, 3, 0, 1, 1);

        image1_2 = new QLabel(widget);
        image1_2->setObjectName(QString::fromUtf8("image1_2"));

        gridLayout->addWidget(image1_2, 3, 1, 1, 1);

        image2_2 = new QLabel(widget);
        image2_2->setObjectName(QString::fromUtf8("image2_2"));

        gridLayout->addWidget(image2_2, 3, 2, 1, 1);

        image3_2 = new QLabel(widget);
        image3_2->setObjectName(QString::fromUtf8("image3_2"));

        gridLayout->addWidget(image3_2, 3, 3, 1, 1);

        mName3 = new QLabel(widget);
        mName3->setObjectName(QString::fromUtf8("mName3"));
        mName3->setFont(font1);

        gridLayout->addWidget(mName3, 4, 0, 1, 1);

        description3 = new QLabel(widget);
        description3->setObjectName(QString::fromUtf8("description3"));

        gridLayout->addWidget(description3, 5, 0, 1, 1);

        image1_3 = new QLabel(widget);
        image1_3->setObjectName(QString::fromUtf8("image1_3"));

        gridLayout->addWidget(image1_3, 5, 1, 1, 1);

        image2_3 = new QLabel(widget);
        image2_3->setObjectName(QString::fromUtf8("image2_3"));

        gridLayout->addWidget(image2_3, 5, 2, 1, 1);

        image3_3 = new QLabel(widget);
        image3_3->setObjectName(QString::fromUtf8("image3_3"));

        gridLayout->addWidget(image3_3, 5, 3, 1, 1);

        widget1 = new QWidget(MuseumMain);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 70, 791, 32));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        homeButton = new QPushButton(widget1);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));

        horizontalLayout->addWidget(homeButton);

        mListButton = new QPushButton(widget1);
        mListButton->setObjectName(QString::fromUtf8("mListButton"));

        horizontalLayout->addWidget(mListButton);

        itemsViewedButton = new QPushButton(widget1);
        itemsViewedButton->setObjectName(QString::fromUtf8("itemsViewedButton"));

        horizontalLayout->addWidget(itemsViewedButton);

        myCommentsButton = new QPushButton(widget1);
        myCommentsButton->setObjectName(QString::fromUtf8("myCommentsButton"));

        horizontalLayout->addWidget(myCommentsButton);

        accountButton = new QPushButton(widget1);
        accountButton->setObjectName(QString::fromUtf8("accountButton"));

        horizontalLayout->addWidget(accountButton);


        retranslateUi(MuseumMain);

        QMetaObject::connectSlotsByName(MuseumMain);
    } // setupUi

    void retranslateUi(QDialog *MuseumMain)
    {
        MuseumMain->setWindowTitle(QCoreApplication::translate("MuseumMain", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MuseumMain", "<h1>Museum Main</h1>", nullptr));
        logoMM->setText(QString());
        mName1->setText(QCoreApplication::translate("MuseumMain", "Museum 1", nullptr));
        description1->setText(QCoreApplication::translate("MuseumMain", "Description", nullptr));
        image1_1->setText(QCoreApplication::translate("MuseumMain", "image 1", nullptr));
        image2_1->setText(QCoreApplication::translate("MuseumMain", "image 2", nullptr));
        image3_1->setText(QCoreApplication::translate("MuseumMain", "image 3", nullptr));
        mName2->setText(QCoreApplication::translate("MuseumMain", "Museum 2", nullptr));
        description2->setText(QCoreApplication::translate("MuseumMain", "Description", nullptr));
        image1_2->setText(QCoreApplication::translate("MuseumMain", "Image 1", nullptr));
        image2_2->setText(QCoreApplication::translate("MuseumMain", "Image 2", nullptr));
        image3_2->setText(QCoreApplication::translate("MuseumMain", "Image 3", nullptr));
        mName3->setText(QCoreApplication::translate("MuseumMain", "Museum 3", nullptr));
        description3->setText(QCoreApplication::translate("MuseumMain", "Description", nullptr));
        image1_3->setText(QCoreApplication::translate("MuseumMain", "Image 1", nullptr));
        image2_3->setText(QCoreApplication::translate("MuseumMain", "Image 2", nullptr));
        image3_3->setText(QCoreApplication::translate("MuseumMain", "Image 3", nullptr));
        homeButton->setText(QCoreApplication::translate("MuseumMain", "Home", nullptr));
        mListButton->setText(QCoreApplication::translate("MuseumMain", "Museum list", nullptr));
        itemsViewedButton->setText(QCoreApplication::translate("MuseumMain", "Items Viewed", nullptr));
        myCommentsButton->setText(QCoreApplication::translate("MuseumMain", "My Comments", nullptr));
        accountButton->setText(QCoreApplication::translate("MuseumMain", "Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MuseumMain: public Ui_MuseumMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSEUMMAIN_H
