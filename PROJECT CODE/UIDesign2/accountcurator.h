#ifndef ACCOUNTCURATOR_H
#define ACCOUNTCURATOR_H

#include "accountedit.h"
#include "museummain.h"

#include <QDialog>

class MuseumMain;

class AccountEdit;

namespace Ui {
class accountCurator;
}

class accountCurator : public QDialog
{
    Q_OBJECT

public:
    explicit accountCurator(QWidget *parent = nullptr);
    ~accountCurator();

private slots:
    void on_pushButton_clicked();

    void on_homeButton_clicked();

private:
    Ui::accountCurator *ui;

    AccountEdit *ae;
    MuseumMain *mu;
};

#endif // ACCOUNTCURATOR_H
