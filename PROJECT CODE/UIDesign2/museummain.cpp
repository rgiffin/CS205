#include "museummain.h"
#include "ui_museummain.h"

MuseumMain::MuseumMain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MuseumMain)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logoMM->width();
    int height = ui->logoMM->height();
    ui->logoMM->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
}

MuseumMain::~MuseumMain()
{
    delete ui;
}

void MuseumMain::on_mListButton_clicked()
{
    //go to museum list page
    ml = new MuseumList();
    ml->show();
    hide();
}

void MuseumMain::on_itemsViewedButton_clicked()
{
    //go to items viewed list
    iv = new ItemsViewed();
    iv->show();
    hide();
}

void MuseumMain::on_myCommentsButton_clicked()
{
    //go to my comments
    mc = new MyComments();
    mc->show();
    hide();
}

void MuseumMain::on_accountButton_clicked()
{
    //go to account

    //if curator open curator account look
    if(1>0)
    {
        ac = new accountCurator();
        ac->show();
        hide();
    }
    else
    {

    }
}
