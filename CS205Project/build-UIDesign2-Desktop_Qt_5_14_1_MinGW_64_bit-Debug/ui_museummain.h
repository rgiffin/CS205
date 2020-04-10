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
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_MuseumMain
{
public:
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_15;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_5;
    QLabel *label_11;
    QLabel *label_7;
    QLabel *label_16;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_14;
    QLabel *label_8;

    void setupUi(QDialog *MuseumMain)
    {
        if (MuseumMain->objectName().isEmpty())
            MuseumMain->setObjectName(QString::fromUtf8("MuseumMain"));
        MuseumMain->resize(823, 600);
        gridLayout = new QGridLayout(MuseumMain);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(MuseumMain);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 2, 1, 1);

        label_15 = new QLabel(MuseumMain);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 6, 2, 1, 1);

        label_2 = new QLabel(MuseumMain);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        label_10 = new QLabel(MuseumMain);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 4, 2, 1, 1);

        label_9 = new QLabel(MuseumMain);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 4, 1, 1, 1);

        label_12 = new QLabel(MuseumMain);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 4, 4, 1, 1);

        label_13 = new QLabel(MuseumMain);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 6, 0, 1, 1);

        label_5 = new QLabel(MuseumMain);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 1, 1, 1);

        label_11 = new QLabel(MuseumMain);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 3, 0, 1, 1);

        label_7 = new QLabel(MuseumMain);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 2, 4, 1, 1);

        label_16 = new QLabel(MuseumMain);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 6, 4, 1, 1);

        label = new QLabel(MuseumMain);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(MuseumMain);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_3 = new QLabel(MuseumMain);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_14 = new QLabel(MuseumMain);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 6, 1, 1, 1);

        label_8 = new QLabel(MuseumMain);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);


        retranslateUi(MuseumMain);

        QMetaObject::connectSlotsByName(MuseumMain);
    } // setupUi

    void retranslateUi(QDialog *MuseumMain)
    {
        MuseumMain->setWindowTitle(QCoreApplication::translate("MuseumMain", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("MuseumMain", "image 2", nullptr));
        label_15->setText(QCoreApplication::translate("MuseumMain", "Image 2", nullptr));
        label_2->setText(QCoreApplication::translate("MuseumMain", "Museum 3", nullptr));
        label_10->setText(QCoreApplication::translate("MuseumMain", "Image 2", nullptr));
        label_9->setText(QCoreApplication::translate("MuseumMain", "Image 1", nullptr));
        label_12->setText(QCoreApplication::translate("MuseumMain", "Image 3", nullptr));
        label_13->setText(QCoreApplication::translate("MuseumMain", "Description", nullptr));
        label_5->setText(QCoreApplication::translate("MuseumMain", "image 1", nullptr));
        label_11->setText(QCoreApplication::translate("MuseumMain", "Museum 2", nullptr));
        label_7->setText(QCoreApplication::translate("MuseumMain", "image 3", nullptr));
        label_16->setText(QCoreApplication::translate("MuseumMain", "Image 3", nullptr));
        label->setText(QCoreApplication::translate("MuseumMain", "<h1>Museum Main</h1>", nullptr));
        label_4->setText(QCoreApplication::translate("MuseumMain", "Description", nullptr));
        label_3->setText(QCoreApplication::translate("MuseumMain", "Museum1", nullptr));
        label_14->setText(QCoreApplication::translate("MuseumMain", "Image 1", nullptr));
        label_8->setText(QCoreApplication::translate("MuseumMain", "Description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MuseumMain: public Ui_MuseumMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSEUMMAIN_H
