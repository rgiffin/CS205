#include "museumlist.h"
#include "ui_museumlist.h"

MuseumList::MuseumList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MuseumList)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logoMM->width();
    int height = ui->logoMM->height();
    ui->logoMM->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
}

MuseumList::~MuseumList()
{
    delete ui;
}


void MuseumList::on_itemsViewedButton_clicked()
{
    //go to items viewed list
    iv = new ItemsViewed();
    iv->show();
    hide();
}

void MuseumList::on_myCommentsButton_clicked()
{
    //go to my comments
    mc = new MyComments();
    mc->show();
    hide();
}

void MuseumList::on_accountButton_clicked()
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
void MuseumList::on_homeButton_clicked()
{
    mm = new MuseumMain();
    mm->show();
    hide();
}

