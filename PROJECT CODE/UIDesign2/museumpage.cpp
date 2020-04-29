#include "museumpage.h"
#include "ui_museumpage.h"
#include <iostream>

using namespace std;

MuseumPage::MuseumPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MuseumPage)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logoMM->width();
    int height = ui->logoMM->height();
    ui->logoMM->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
}

MuseumPage::~MuseumPage()
{
    delete ui;
}

void MuseumPage::on_image1_linkActivated(const QString &link)
{
    cout << "image clicked" << endl;
}

void MuseumPage::on_mListButton_clicked()
{
    //go to museum list page
    ml = new MuseumList();
    ml->setUName(username);
    ml->show();
    hide();
}

void MuseumPage::on_itemsViewedButton_clicked()
{
    //go to items viewed list
    iv = new ItemsViewed();
    iv->setUName(username);
    iv->show();
    hide();
}

void MuseumPage::on_myCommentsButton_clicked()
{
    //go to my comments
    mc = new MyComments();
    mc->setUName(username);
    mc->show();
    hide();
}

void MuseumPage::on_accountButton_clicked()
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

void MuseumPage::on_homeButton_clicked()
{
    mm = new MuseumMain();
    mm->setUName(username);
    mm->show();
    hide();
}

void MuseumPage::setUName(std::string u)
{
    username = u;
}

std::string MuseumPage::getUName()
{
    return username;
}

void MuseumPage::setMName(std::string m)
{
    museumName = m;
    ui->muName->setText(QString::fromStdString(museumName));
}

std::string MuseumPage::getMName()
{
    return museumName;
}

void MuseumPage::on_next_clicked()
{
    //get next set of images and items
}

void MuseumPage::on_previous_clicked()
{
    //get previous set
}
