#include "login.h"
#include "ui_login.h"
#include "QMessageBox"
#include <QPixmap>




Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logo->width();
    int height = ui->logo->height();
    ui->logo->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
}

Login::~Login()
{
    delete ui;
}


void Login::on_pushButton_2_clicked()
{
    //Sign up button clicked
      su = new SignUp(this);
      su->show();



}

void Login::on_pushButton_clicked()
{
    //login button clicked

    QString username = ui->textUsername->text();
    QString password = ui->textPassword->text();

    if(username == "test" && password == "test")
    {
        //QMessageBox::information(this,"Message", "Login is correct", QMessageBox::Ok);
        ui->statusbar->showMessage("Username and Password are correct", 5000);
        hide();
        mu = new MuseumMain(this);
        mu->show();
    }
    else
    {
        //QMessageBox::warning(this,"Message", "Login failed", QMessageBox::Ok);
        ui->statusbar->showMessage("Username and Password are not correct");
    }


}
