#ifndef ACCOUNTEDIT_H
#define ACCOUNTEDIT_H

#include "accountcurator.h"
#include "museummain.h"
#include<iostream>
#include <QDialog>
#include<string.h>
#include<QtSql>
#include<QSqlQuery>
using namespace std;
class accountCurator;
class MuseumMain;

namespace Ui {
class AccountEdit;
}

class AccountEdit : public QDialog
{
    Q_OBJECT

public:
    explicit AccountEdit(QWidget *parent = nullptr);
    ~AccountEdit();
    void editAccount(string, string, string, string, string);
    string currUser;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_homeButton_clicked();

private:
    Ui::AccountEdit *ui;

    accountCurator *ac;

    MuseumMain *mu;

};

#endif // ACCOUNTEDIT_H
