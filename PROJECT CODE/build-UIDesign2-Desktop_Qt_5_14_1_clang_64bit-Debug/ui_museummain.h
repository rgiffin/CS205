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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *homeButton;
    QPushButton *mListButton;
    QPushButton *itemsViewedButton;
    QPushButton *myCommentsButton;
    QPushButton *accountButton;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *logo;

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
        layoutWidget = new QWidget(MuseumMain);
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

        label_2 = new QLabel(MuseumMain);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 330, 341, 91));
        label_2->setMaximumSize(QSize(341, 131));
        QFont font1;
        font1.setPointSize(23);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);
        label_3 = new QLabel(MuseumMain);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 420, 341, 31));
        label_3->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(MuseumMain);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 450, 241, 71));
        logo = new QLabel(MuseumMain);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(230, 110, 351, 211));
        logo->setAlignment(Qt::AlignCenter);
        QWidget::setTabOrder(homeButton, mListButton);
        QWidget::setTabOrder(mListButton, itemsViewedButton);
        QWidget::setTabOrder(itemsViewedButton, myCommentsButton);
        QWidget::setTabOrder(myCommentsButton, accountButton);

        retranslateUi(MuseumMain);

        QMetaObject::connectSlotsByName(MuseumMain);
    } // setupUi

    void retranslateUi(QDialog *MuseumMain)
    {
        MuseumMain->setWindowTitle(QCoreApplication::translate("MuseumMain", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MuseumMain", "<h1>Museum Main</h1>", nullptr));
        logoMM->setText(QString());
        homeButton->setText(QCoreApplication::translate("MuseumMain", "Home", nullptr));
        mListButton->setText(QCoreApplication::translate("MuseumMain", "Museum list", nullptr));
        itemsViewedButton->setText(QCoreApplication::translate("MuseumMain", "Search", nullptr));
        myCommentsButton->setText(QCoreApplication::translate("MuseumMain", "My Comments", nullptr));
        accountButton->setText(QCoreApplication::translate("MuseumMain", "Account", nullptr));
        label_2->setText(QCoreApplication::translate("MuseumMain", "Welcome to Professor Pfaffman's Museum of Museums!", nullptr));
        label_3->setText(QCoreApplication::translate("MuseumMain", "Visit the Museum List by clicking below", nullptr));
        pushButton->setText(QCoreApplication::translate("MuseumMain", "Museum List", nullptr));
        logo->setText(QCoreApplication::translate("MuseumMain", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MuseumMain: public Ui_MuseumMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSEUMMAIN_H
