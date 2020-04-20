#ifndef ACCOUNTEDIT_H
#define ACCOUNTEDIT_H

#include "accountcurator.h"
#include "museummain.h"

#include <QDialog>
#include<string>
#include<QtSql>
#include<QSqlQuery>

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
    void getAccInfo(string);
    void editAccount(string, string, string, string, string);

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
