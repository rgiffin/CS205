#include "signup.h"
#include "ui_signup.h"
#include "QMessageBox"
#include <QPixmap>

SignUp::SignUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->RLogo->width();
    int height = ui->RLogo->height();
    ui->RLogo->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
}

SignUp::~SignUp()
{
    delete ui;
}




void SignUp::on_pushButton_clicked()
{
    QString username = ui->Username->text();
    QString password = ui->Password->text();
    QString email = ui->Email->text();
    QString name = ui->Name->text();
    QString confP = ui->PasswordConf->text();
    QString type = "";

    if(ui->Viewer->isChecked())
        type = "Viewer";
    if(ui->Curator->isChecked())
        type = "Curator";

    if(password == confP)
    {
        //save data here





        close();
    }
    else
    {
        QMessageBox::warning(this,"Message", "Passwords do not match", QMessageBox::Ok);
    }



}
