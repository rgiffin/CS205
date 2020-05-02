/********************************************************************************
** Form generated from reading UI file 'approvecomments.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPROVECOMMENTS_H
#define UI_APPROVECOMMENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ApproveComments
{
public:
    QLabel *label;
    QLabel *user;
    QLabel *comment;
    QPushButton *exit;
    QPushButton *approve;
    QPushButton *deny;

    void setupUi(QDialog *ApproveComments)
    {
        if (ApproveComments->objectName().isEmpty())
            ApproveComments->setObjectName(QString::fromUtf8("ApproveComments"));
        ApproveComments->resize(320, 240);
        label = new QLabel(ApproveComments);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 241, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next Condensed"));
        font.setPointSize(15);
        font.setItalic(false);
        label->setFont(font);
        user = new QLabel(ApproveComments);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(10, 70, 131, 21));
        user->setMaximumSize(QSize(131, 21));
        comment = new QLabel(ApproveComments);
        comment->setObjectName(QString::fromUtf8("comment"));
        comment->setGeometry(QRect(10, 100, 291, 91));
        comment->setMaximumSize(QSize(291, 91));
        QFont font1;
        font1.setPointSize(13);
        comment->setFont(font1);
        comment->setWordWrap(true);
        exit = new QPushButton(ApproveComments);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(0, 200, 81, 32));
        approve = new QPushButton(ApproveComments);
        approve->setObjectName(QString::fromUtf8("approve"));
        approve->setGeometry(QRect(210, 200, 113, 32));
        deny = new QPushButton(ApproveComments);
        deny->setObjectName(QString::fromUtf8("deny"));
        deny->setGeometry(QRect(110, 200, 113, 32));

        retranslateUi(ApproveComments);

        QMetaObject::connectSlotsByName(ApproveComments);
    } // setupUi

    void retranslateUi(QDialog *ApproveComments)
    {
        ApproveComments->setWindowTitle(QCoreApplication::translate("ApproveComments", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ApproveComments", "<h1>Approve Comments</h1>", nullptr));
        user->setText(QCoreApplication::translate("ApproveComments", "User:", nullptr));
        comment->setText(QCoreApplication::translate("ApproveComments", "Comment", nullptr));
        exit->setText(QCoreApplication::translate("ApproveComments", "Exit", nullptr));
        approve->setText(QCoreApplication::translate("ApproveComments", "Approve", nullptr));
        deny->setText(QCoreApplication::translate("ApproveComments", "Deny", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ApproveComments: public Ui_ApproveComments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPROVECOMMENTS_H
