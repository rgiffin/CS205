#include "museumpage.h"
#include "ui_museumpage.h"
#include <iostream>
#include "user.h"

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



    iName1 = "";
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


    index = 0;

}

MuseumPage::~MuseumPage()
{
    delete ui;
}

void MuseumPage::on_image1_linkActivated(const QString &link)
{
    link.at(1);
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
    Museum muse;
    muse.name = museumName;
    muse.getMuseumItems();
    itemList = muse.getItemList();
    index = 0;
    display(index);
}

std::string MuseumPage::getMName()
{
    return museumName;
}

void MuseumPage::on_next_clicked()
{
    //get next set of images and items
    int size = itemList.size();
    index = index+9;
    Museum muse;
    muse.name = museumName;
    muse.getMuseumItems();
    itemList = muse.getItemList();
    while(index>size)
    {
        index = index - itemList.size();
    }

    display(index);
}

void MuseumPage::on_previous_clicked()
{
    //get previous set
    //go to previous page
    index = index - 9;
    Museum muse;
    muse.name = museumName;
    muse.getMuseumItems();
    itemList = muse.getItemList();
    index = 0;
    if(index<0)
    {
        index = itemList.size()+index;
    }
    if(index<0)
    {
        index = 0;
    }
    display(index);

}

void MuseumPage::display(int i)
{
    int size = itemList.size();
    int width = 0;
    int height = 0;

    if(size == 0)
    {
        return;
    }

    if(i>=size)
    {
        i = 0;
    }
    Item one = itemList.at(i++);
    iName1 = one.getName();
    width = ui->image1->width();
    height = ui->image1->height();
    ui->image1->setPixmap(one.getImage().scaled(width,height, Qt::KeepAspectRatio));
    ui->name_1->setText(QString::fromStdString(iName1));
    ui->image1->setAlignment(Qt::AlignCenter);


    if(i>=size)
    {
        i = 0;
    }
    Item two = itemList.at(i++);
    iName2 = two.getName();
    width = ui->image2->width();
    height = ui->image2->height();
    ui->image2->setPixmap(two.getImage().scaled(width,height, Qt::KeepAspectRatio));
    ui->name_2->setText(QString::fromStdString(iName2));
    ui->image2->setAlignment(Qt::AlignCenter);

    if(i>=size)
    {
        i = 0;
    }
    Item three = itemList.at(i++);
    iName3 = three.getName();
    width = ui->image3->width();
    height = ui->image3->height();
    ui->image3->setPixmap(three.getImage().scaled(width,height, Qt::KeepAspectRatio));
    ui->name_3->setText(QString::fromStdString(iName3));
    ui->image3->setAlignment(Qt::AlignCenter);

    if(i>=size)
    {
        i = 0;
    }
    Item four = itemList.at(i++);
    iName4 = four.getName();
    width = ui->image4->width();
    height = ui->image4->height();
    ui->image4->setPixmap(four.getImage().scaled(width,height, Qt::KeepAspectRatio));
    ui->name_4->setText(QString::fromStdString(iName4));
    ui->image4->setAlignment(Qt::AlignCenter);

    if(i>=size)
    {
        i = 0;
    }
    Item five = itemList.at(i++);
    iName5 = five.getName();
    width = ui->image5->width();
    height = ui->image5->height();
    ui->image5->setPixmap(five.getImage().scaled(width,height, Qt::KeepAspectRatio));
    ui->name_5->setText(QString::fromStdString(iName5));
    ui->image5->setAlignment(Qt::AlignCenter);

    if(i>=size)
    {
        i = 0;
    }
    Item six = itemList.at(i++);
    iName6 = six.getName();
    width = ui->image6->width();
    height = ui->image6->height();
    ui->image6->setPixmap(six.getImage().scaled(width,height, Qt::KeepAspectRatio));
    ui->name_6->setText(QString::fromStdString(iName6));
    ui->image6->setAlignment(Qt::AlignCenter);

    if(i>=size)
    {
        i = 0;
    }
    Item seven = itemList.at(i++);
    iName7 = seven.getName();
    width = ui->image7->width();
    height = ui->image7->height();
    ui->image7->setPixmap(seven.getImage().scaled(width,height, Qt::KeepAspectRatio));
    ui->name_7->setText(QString::fromStdString(iName7));
    ui->image7->setAlignment(Qt::AlignCenter);

    if(i>=size)
    {
        i = 0;
    }
    Item eight = itemList.at(i++);
    iName8 = eight.getName();
    width = ui->image8->width();
    height = ui->image8->height();
    ui->image8->setPixmap(eight.getImage().scaled(width,height, Qt::KeepAspectRatio));
    ui->name_8->setText(QString::fromStdString(iName8));
    ui->image8->setAlignment(Qt::AlignCenter);

    if(i>=size)
    {
        i = 0;
    }
    Item nine = itemList.at(i++);
    iName9 = nine.getName();
    width = ui->image9->width();
    height = ui->image9->height();
    ui->image9->setPixmap(nine.getImage().scaled(width,height, Qt::KeepAspectRatio));
    ui->name_9->setText(QString::fromStdString(iName9));
    ui->image9->setAlignment(Qt::AlignCenter);


}


void MuseumPage::on_name_1_clicked()
{
    ip = new ItemView();
    ip->setIName(iName1);
    ip->setIndex(index);
    ip->setItems(itemList);
    ip->setMName(museumName);
    ip->setUName(username);
    ip->show();
    hide();

}

void MuseumPage::on_name_2_clicked()
{
    ip = new ItemView();
    ip->setIName(iName2);
    ip->setIndex(index+1);
    ip->setItems(itemList);
    ip->setMName(museumName);
    ip->setUName(username);
    ip->show();
    hide();
}

void MuseumPage::on_name_3_clicked()
{
    ip = new ItemView();
    ip->setIName(iName3);
    ip->setIndex(index+2);
    ip->setItems(itemList);
    ip->setMName(museumName);
    ip->setUName(username);
    ip->show();
    hide();
}

void MuseumPage::on_name_4_clicked()
{
    ip = new ItemView();
    ip->setIName(iName4);
    ip->setIndex(index+3);
    ip->setItems(itemList);
    ip->setMName(museumName);
    ip->setUName(username);
    ip->show();
    hide();
}

void MuseumPage::on_name_5_clicked()
{
    ip = new ItemView();
    ip->setIName(iName5);
    ip->setIndex(index+4);
    ip->setItems(itemList);
    ip->setMName(museumName);
    ip->setUName(username);
    ip->show();
    hide();
}

void MuseumPage::on_name_6_clicked()
{
    ip = new ItemView();
    ip->setIName(iName6);
    ip->setIndex(index+5);
    ip->setItems(itemList);
    ip->setMName(museumName);
    ip->setUName(username);
    ip->show();
    hide();
}

void MuseumPage::on_name_7_clicked()
{
    ip = new ItemView();
    ip->setIName(iName7);
    ip->setIndex(index+6);
    ip->setItems(itemList);
    ip->setMName(museumName);
    ip->setUName(username);
    ip->show();
    hide();
}

void MuseumPage::on_name_8_clicked()
{
    ip = new ItemView();
    ip->setIName(iName8);
    ip->setIndex(index+7);
    ip->setItems(itemList);
    ip->setMName(museumName);
    ip->setUName(username);
    ip->show();
    hide();
}

void MuseumPage::on_name_9_clicked()
{
    ip = new ItemView();
    ip->setIName(iName9);
    ip->setIndex(index+8);
    ip->setItems(itemList);
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


return m;
}
