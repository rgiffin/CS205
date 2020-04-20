#include "itemsviewed.h"
#include "ui_itemsviewed.h"

ItemsViewed::ItemsViewed(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ItemsViewed)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logoMM->width();
    int height = ui->logoMM->height();
    ui->logoMM->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
}

ItemsViewed::~ItemsViewed()
{
    delete ui;
}


void ItemsViewed::on_myCommentsButton_clicked()
{
    //go to my comments
    mc = new MyComments();
    mc->setUName(username);
    mc->show();
    hide();
}

void ItemsViewed::on_accountButton_clicked()
{
    //go to account

    //if curator open curator account look
    if(1>0)
    {
        ac = new accountCurator();
        ac->setUName(username);
        ac->show();
        hide();
    }
    else
    {

    }
}
void ItemsViewed::on_homeButton_clicked()
{
    mm = new MuseumMain();
    mm->setUName(username);
    mm->show();
    hide();
}


void ItemsViewed::on_mListButton_clicked()
{
    ml = new MuseumList();
    ml->setUName(username);
    ml->show();
    hide();
}


void ItemsViewed::setUName(std::string u)
{
    username = u;
}

std::string ItemsViewed::getUName()
{
    return username;
}
