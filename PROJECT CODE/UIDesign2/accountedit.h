#ifndef ACCOUNTEDIT_H
#define ACCOUNTEDIT_H

#include "accountcurator.h"
#include "museummain.h"

#include <QDialog>

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

    void setUName(std::string u);
    std::string getUName();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_homeButton_clicked();

private:
    Ui::AccountEdit *ui;

    accountCurator *ac;

    MuseumMain *mu;

    std::string username;
};

#endif // ACCOUNTEDIT_H
