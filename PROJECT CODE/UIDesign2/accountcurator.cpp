#include "accountcurator.h"
#include "ui_accountcurator.h"

accountCurator::accountCurator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::accountCurator)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logoMM->width();
    int height = ui->logoMM->height();
    ui->logoMM->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
}

accountCurator::~accountCurator()
{
    delete ui;
}

void accountCurator::on_pushButton_clicked()
{
    //open account editor
    ae = new AccountEdit();
    ae->show();
    hide();
}

void accountCurator::on_homeButton_clicked()
{
    mu = new MuseumMain();
    mu->show();
    hide();
}

void accountCurator::on_mListButton_clicked()
{
    ml = new MuseumList();
    ml->show();
    hide();
}

void accountCurator::on_myCommentsButton_clicked()
{
    //go to my comments
    mc = new MyComments();
    mc->show();
    hide();
}




void accountCurator::on_itemsViewedButton_clicked()
{
    iv = new ItemsViewed();
    iv->show();
    hide();
}

