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
#include <QtWidgets/QGridLayout>
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
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_4;
    QLabel *mName1_4;
    QLabel *description1_4;
    QLabel *image1_10;
    QLabel *image2_10;
    QLabel *image3_10;
    QLabel *mName2_4;
    QLabel *description2_4;
    QLabel *image1_11;
    QLabel *image2_11;
    QLabel *image3_11;
    QLabel *mName3_4;
    QLabel *description3_4;
    QLabel *image1_12;
    QLabel *image2_12;
    QLabel *image3_12;
    QPushButton *visit1_4;
    QPushButton *visit2_4;
    QPushButton *visit3_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

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
        layoutWidget_2 = new QWidget(MuseumList);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 110, 791, 451));
        gridLayout_4 = new QGridLayout(layoutWidget_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        mName1_4 = new QLabel(layoutWidget_2);
        mName1_4->setObjectName(QString::fromUtf8("mName1_4"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Skia"));
        font1.setPointSize(20);
        mName1_4->setFont(font1);

        gridLayout_4->addWidget(mName1_4, 0, 0, 1, 1);

        description1_4 = new QLabel(layoutWidget_2);
        description1_4->setObjectName(QString::fromUtf8("description1_4"));

        gridLayout_4->addWidget(description1_4, 1, 0, 1, 1);

        image1_10 = new QLabel(layoutWidget_2);
        image1_10->setObjectName(QString::fromUtf8("image1_10"));

        gridLayout_4->addWidget(image1_10, 1, 1, 1, 1);

        image2_10 = new QLabel(layoutWidget_2);
        image2_10->setObjectName(QString::fromUtf8("image2_10"));

        gridLayout_4->addWidget(image2_10, 1, 2, 1, 1);

        image3_10 = new QLabel(layoutWidget_2);
        image3_10->setObjectName(QString::fromUtf8("image3_10"));

        gridLayout_4->addWidget(image3_10, 1, 3, 1, 1);

        mName2_4 = new QLabel(layoutWidget_2);
        mName2_4->setObjectName(QString::fromUtf8("mName2_4"));
        mName2_4->setFont(font1);

        gridLayout_4->addWidget(mName2_4, 2, 0, 1, 1);

        description2_4 = new QLabel(layoutWidget_2);
        description2_4->setObjectName(QString::fromUtf8("description2_4"));

        gridLayout_4->addWidget(description2_4, 3, 0, 1, 1);

        image1_11 = new QLabel(layoutWidget_2);
        image1_11->setObjectName(QString::fromUtf8("image1_11"));

        gridLayout_4->addWidget(image1_11, 3, 1, 1, 1);

        image2_11 = new QLabel(layoutWidget_2);
        image2_11->setObjectName(QString::fromUtf8("image2_11"));

        gridLayout_4->addWidget(image2_11, 3, 2, 1, 1);

        image3_11 = new QLabel(layoutWidget_2);
        image3_11->setObjectName(QString::fromUtf8("image3_11"));

        gridLayout_4->addWidget(image3_11, 3, 3, 1, 1);

        mName3_4 = new QLabel(layoutWidget_2);
        mName3_4->setObjectName(QString::fromUtf8("mName3_4"));
        mName3_4->setFont(font1);

        gridLayout_4->addWidget(mName3_4, 4, 0, 1, 1);

        description3_4 = new QLabel(layoutWidget_2);
        description3_4->setObjectName(QString::fromUtf8("description3_4"));

        gridLayout_4->addWidget(description3_4, 5, 0, 1, 1);

        image1_12 = new QLabel(layoutWidget_2);
        image1_12->setObjectName(QString::fromUtf8("image1_12"));

        gridLayout_4->addWidget(image1_12, 5, 1, 1, 1);

        image2_12 = new QLabel(layoutWidget_2);
        image2_12->setObjectName(QString::fromUtf8("image2_12"));

        gridLayout_4->addWidget(image2_12, 5, 2, 1, 1);

        image3_12 = new QLabel(layoutWidget_2);
        image3_12->setObjectName(QString::fromUtf8("image3_12"));

        gridLayout_4->addWidget(image3_12, 5, 3, 1, 1);

        visit1_4 = new QPushButton(layoutWidget_2);
        visit1_4->setObjectName(QString::fromUtf8("visit1_4"));

        gridLayout_4->addWidget(visit1_4, 0, 1, 1, 1);

        visit2_4 = new QPushButton(layoutWidget_2);
        visit2_4->setObjectName(QString::fromUtf8("visit2_4"));

        gridLayout_4->addWidget(visit2_4, 2, 1, 1, 1);

        visit3_4 = new QPushButton(layoutWidget_2);
        visit3_4->setObjectName(QString::fromUtf8("visit3_4"));

        gridLayout_4->addWidget(visit3_4, 4, 1, 1, 1);

        pushButton = new QPushButton(MuseumList);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(690, 560, 113, 32));
        pushButton_2 = new QPushButton(MuseumList);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(590, 560, 113, 32));

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
        mName1_4->setText(QCoreApplication::translate("MuseumList", "Museum 1", nullptr));
        description1_4->setText(QCoreApplication::translate("MuseumList", "Description", nullptr));
        image1_10->setText(QCoreApplication::translate("MuseumList", "image 1", nullptr));
        image2_10->setText(QCoreApplication::translate("MuseumList", "image 2", nullptr));
        image3_10->setText(QCoreApplication::translate("MuseumList", "image 3", nullptr));
        mName2_4->setText(QCoreApplication::translate("MuseumList", "Museum 2", nullptr));
        description2_4->setText(QCoreApplication::translate("MuseumList", "Description", nullptr));
        image1_11->setText(QCoreApplication::translate("MuseumList", "Image 1", nullptr));
        image2_11->setText(QCoreApplication::translate("MuseumList", "Image 2", nullptr));
        image3_11->setText(QCoreApplication::translate("MuseumList", "Image 3", nullptr));
        mName3_4->setText(QCoreApplication::translate("MuseumList", "Museum 3", nullptr));
        description3_4->setText(QCoreApplication::translate("MuseumList", "Description", nullptr));
        image1_12->setText(QCoreApplication::translate("MuseumList", "Image 1", nullptr));
        image2_12->setText(QCoreApplication::translate("MuseumList", "Image 2", nullptr));
        image3_12->setText(QCoreApplication::translate("MuseumList", "Image 3", nullptr));
        visit1_4->setText(QCoreApplication::translate("MuseumList", "Visit Museum1", nullptr));
        visit2_4->setText(QCoreApplication::translate("MuseumList", "Visit Museum 2", nullptr));
        visit3_4->setText(QCoreApplication::translate("MuseumList", "Visit Museum 3", nullptr));
        pushButton->setText(QCoreApplication::translate("MuseumList", "Next Page", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MuseumList", "Previous", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MuseumList: public Ui_MuseumList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSEUMLIST_H
