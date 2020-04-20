#include "accountedit.h"
#include "ui_accountedit.h"

AccountEdit::AccountEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AccountEdit)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logoMM->width();
    int height = ui->logoMM->height();
    ui->logoMM->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
}

AccountEdit::~AccountEdit()
{
    delete ui;
}


//save button pressed
void AccountEdit::on_pushButton_clicked()
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


    ac = new accountCurator();
    ac->setUName(username.toStdString());
    ac->show();
    hide();
}

//cancel button pressed
void AccountEdit::on_pushButton_2_clicked()
{
    ac = new accountCurator();
    ac->setUName(username);
    ac->show();
    hide();
}



void AccountEdit::on_homeButton_clicked()
{
    mu = new MuseumMain();
    mu->setUName(username);
    mu->show();
    hide();
}

void AccountEdit::setUName(std::string u)
{
    username = u;
}

std::string AccountEdit::getUName()
{
    return username;
}
