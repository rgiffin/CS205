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

    name1 = "Museum 1";
    name2 = "";
    name3 = "";

    ui->mName1_4->setText(QString::fromStdString(name1));
    ui->mName2_4->setText(QString::fromStdString(name2));
    ui->mName3_4->setText(QString::fromStdString(name3));

    ui->visit1_4->setText("Visit "+QString::fromStdString(name1));
    ui->visit2_4->setText("Visit "+QString::fromStdString(name2));
    ui->visit3_4->setText("Visit "+QString::fromStdString(name3));
}

MuseumList::~MuseumList()
{
    delete ui;
}


void MuseumList::on_itemsViewedButton_clicked()
{
    //go to items viewed list
    iv = new ItemsViewed();
    iv->setUName(username);
    iv->show();
    hide();
}

void MuseumList::on_myCommentsButton_clicked()
{
    //go to my comments
    mc = new MyComments();
    mc->setUName(username);
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
        ac->setUName(username);
        ac->show();
        hide();
    }
    else
    {
        av = new accountViewer();
        av->setUName(username);
        av->show();
        hide();
    }
}
void MuseumList::on_homeButton_clicked()
{
    mm = new MuseumMain();
    mm->setUName(username);
    mm->show();
    hide();
}

void MuseumList::setUName(std::string u)
{
    username = u;
}

std::string MuseumList::getUName()
{
    return username;
}


void MuseumList::on_visit1_4_clicked()
{
    //go to museum 1
    mp = new MuseumPage();
    mp->setUName(username);
    mp->setMName(name1);
    mp->show();
    hide();
}

void MuseumList::on_visit2_4_clicked()
{
    //go to museum 2
    mp = new MuseumPage();
    mp->setUName(username);
    mp->setMName(name2);
    mp->show();
    hide();
}

void MuseumList::on_visit3_4_clicked()
{
    //go to museum 3
    mp = new MuseumPage();
    mp->setUName(username);
    mp->setMName(name3);
    mp->show();
    hide();
}

void MuseumList::on_pushButton_clicked()
{
    //go to next page

}

void MuseumList::on_pushButton_2_clicked()
{
    //go to previous page

}
