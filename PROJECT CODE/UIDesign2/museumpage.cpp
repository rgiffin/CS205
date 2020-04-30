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


    iName1 = "Item 1";
    iName2 = "";
    iName3 = "";
    iName4 = "";
    iName5 = "";
    iName6 = "";
    iName7 = "";
    iName8 = "";
    iName9 = "";

    ui->name_1->setText(QString::fromStdString(iName1));
    ui->name_2->setText(QString::fromStdString(iName2));
    ui->name_3->setText(QString::fromStdString(iName3));
    ui->name_4->setText(QString::fromStdString(iName4));
    ui->name_5->setText(QString::fromStdString(iName5));
    ui->name_6->setText(QString::fromStdString(iName6));
    ui->name_7->setText(QString::fromStdString(iName7));
    ui->name_8->setText(QString::fromStdString(iName8));
    ui->name_9->setText(QString::fromStdString(iName9));



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

void MuseumPage::on_name_1_clicked()
{
    ip = new ItemView();
    ip->setIName(iName1);
    ip->setMName(museumName);
    ip->setUName(username);
    ip->show();
    hide();

}

void MuseumPage::on_name_2_clicked()
{
    ip = new ItemView();
    ip->setIName(iName2);
    ip->setMName(museumName);
    ip->setUName(username);
    ip->show();
    hide();
}

void MuseumPage::on_name_3_clicked()
{
    ip = new ItemView();
    ip->setIName(iName3);
    ip->setMName(museumName);
    ip->setUName(username);
    ip->show();
    hide();
}

void MuseumPage::on_name_4_clicked()
{
    ip = new ItemView();
    ip->setIName(iName4);
    ip->setMName(museumName);
    ip->setUName(username);
    ip->show();
    hide();
}

void MuseumPage::on_name_5_clicked()
{
    ip = new ItemView();
    ip->setIName(iName5);
    ip->setMName(museumName);
    ip->setUName(username);
    ip->show();
    hide();
}

void MuseumPage::on_name_6_clicked()
{
    ip = new ItemView();
    ip->setIName(iName6);
    ip->setMName(museumName);
    ip->setUName(username);
    ip->show();
    hide();
}

void MuseumPage::on_name_7_clicked()
{
    ip = new ItemView();
    ip->setIName(iName7);
    ip->setMName(museumName);
    ip->setUName(username);
    ip->show();
    hide();
}

void MuseumPage::on_name_8_clicked()
{
    ip = new ItemView();
    ip->setIName(iName8);
    ip->setMName(museumName);
    ip->setUName(username);
    ip->show();
    hide();
}

void MuseumPage::on_name_9_clicked()
{
    ip = new ItemView();
    ip->setIName(iName9);
    ip->setMName(museumName);
    ip->setUName(username);
    ip->show();
    hide();
}

void MuseumPage::on_pushButton_clicked()
{
    //go to museum list page
    ml = new MuseumList();
    ml->setUName(username);
    ml->show();
    hide();
}

//Fills Museum with info to display
Museum MuseumPage::setMuseum(string museumName, string owner)
{
//Museum to fill
Museum m;

QSqlDatabase db;
//connect to database
db = QSqlDatabase::addDatabase("QSQLITE");
db.setDatabaseName("dbv2.sqlite");
//Opens database
if(!db.open())
{
    cout << "DATABASE COULD NOT BE OPENED" << endl;
}
string s1 = "SELECT * FROM itemTable WHERE museum = ";
s1.append("'");
s1.append(museumName);
s1.append("'");
s1.append(" AND owner = '");
s1.append(owner);
s1.append("'");
char s2[s1.size()+1];
strcpy(s2,s1.c_str());
QSqlQuery query;
query.exec(s2);

while(query.next())
{
    cout << query.at();
}

}
