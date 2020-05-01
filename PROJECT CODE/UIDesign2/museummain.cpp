#include "museummain.h"
#include "ui_museummain.h"
#include "user.h"

MuseumMain::MuseumMain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MuseumMain)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logoMM->width();
    int height = ui->logoMM->height();
    ui->logoMM->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));

    name1 = "Museum 1";
    name2 = "";
    name3 = "";

    ui->mName1->setText(QString::fromStdString(name1));
    ui->mName2->setText(QString::fromStdString(name2));
    ui->mName3->setText(QString::fromStdString(name3));

    ui->visit1->setText("Visit "+QString::fromStdString(name1));
    ui->visit2->setText("Visit "+QString::fromStdString(name2));
    ui->visit3->setText("Visit "+QString::fromStdString(name3));


}

MuseumMain::~MuseumMain()
{
    delete ui;
}

void MuseumMain::on_mListButton_clicked()
{
    //go to museum list page
    ml = new MuseumList();
    ml->setUName(username);
    ml->show();
    hide();
}

void MuseumMain::on_itemsViewedButton_clicked()
{
    //go to items viewed list
    iv = new ItemsViewed();
    iv->setUName(username);
    iv->show();
    hide();
}

void MuseumMain::on_myCommentsButton_clicked()
{
    //go to my comments
    mc = new MyComments();
    mc->setUName(username);
    mc->show();
    hide();
}

void MuseumMain::on_accountButton_clicked()
{
    //go to account
    User u;
    u.setUsername(username);
    u.getAccInfo(username);

    //if curator open curator account look
    if(u.ifCurator())
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






void MuseumMain::setUName(std::string u)
{
    username = u;
}

std::string MuseumMain::getUName()
{
    return username;
}

void MuseumMain::on_visit1_clicked()
{
    mp = new MuseumPage();
    mp->setUName(username);
    mp->setMName(name1);
    mp->show();
    hide();
}

void MuseumMain::on_visit2_clicked()
{
    mp = new MuseumPage();
    mp->setUName(username);
    mp->setMName(name2);
    mp->show();
    hide();
}

void MuseumMain::on_visit3_clicked()
{
    mp = new MuseumPage();
    mp->setUName(username);
    mp->setMName(name3);
    mp->show();
    hide();
}
