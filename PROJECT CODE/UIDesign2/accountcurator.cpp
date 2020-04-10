#include "accountcurator.h"
#include "ui_accountcurator.h"

accountCurator::accountCurator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::accountCurator)
{
    ui->setupUi(this);
}

accountCurator::~accountCurator()
{
    delete ui;
}

void accountCurator::on_pushButton_clicked()
{
    //open account editor
    ae = new AccountEdit(this);
    ae->show();
    hide();
}

void accountCurator::on_homeButton_clicked()
{
    mu = new MuseumMain(this);
    mu->show();
    hide();
}
