#include "addmuseum.h"
#include "ui_addmuseum.h"

AddMuseum::AddMuseum(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddMuseum)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logoMM_2->width();
    int height = ui->logoMM_2->height();
    ui->logoMM_2->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
}

AddMuseum::~AddMuseum()
{
    delete ui;
}

void AddMuseum::on_pushButton_2_clicked()
{
    //canceled
    ac = new accountCurator();
    ac->show();
    hide();
}

void AddMuseum::on_pushButton_clicked()
{
    //save museum data

    //go back
    ac = new accountCurator();
    ac->show();
    hide();
}
