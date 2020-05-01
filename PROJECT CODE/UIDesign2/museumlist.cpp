#include "museumlist.h"
#include "ui_museumlist.h"
#include "user.h"

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





    musList = getMuseums();
    index = 0;
    display(index);

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
    int size = musList.size();
    index = index+3;
    if(index>size)
    {
        index = index - musList.size();
    }

    display(index);
}

void MuseumList::on_pushButton_2_clicked()
{
    //go to previous page
    index = index - 3;
    if(index<0)
    {
        index = musList.size()+index;
    }
    display(index);

}

//Returns a vector of all museums in the database as a vector of museum objects
vector<Museum> MuseumList::getMuseums()
{
    vector<Museum> retVector;
    QSqlDatabase db;
    //connect to database
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");

    //Opens database
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }

    string s1 = "SELECT * FROM museumTable";
    cout << s1 << endl;
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());

    QSqlQuery query;
    query.exec(s2);

    //Makes museums and puts them into the vector
    while(query.next())
    {
        Museum m;
        m.name = query.value(0).toString().toStdString();
        m.description = query.value(1).toString().toStdString();
        m.owner = query.value(2).toString().toStdString();
        retVector.push_back(m);
    }

    return retVector;
}


void MuseumList::display(int i)
{
    int size = musList.size();
    QPixmap p;
    ui->image1_10->setPixmap(p);
    ui->image1_11->setPixmap(p);
    ui->image1_12->setPixmap(p);
    ui->image2_10->setPixmap(p);
    ui->image2_11->setPixmap(p);
    ui->image2_12->setPixmap(p);
    ui->image3_10->setPixmap(p);
    ui->image3_11->setPixmap(p);
    ui->image3_12->setPixmap(p);

    //setting museum1
    if(i>=size)
    {
        i = 0;
    }

    Museum one = musList.at(i++);
    name1 = one.getName();
    desc1 = one.getDescription();
    owner1 = one.getOwner();

    ui->mName1_4->setText(QString::fromStdString(name1));
    ui->visit1_4->setText("Visit "+QString::fromStdString(name1));
    ui->description1_4->setText(QString::fromStdString(desc1));
    ui->own1->setText("Owner: "+QString::fromStdString(owner1));

    //setting images for museum 1
    one.getMuseumItems();
    vector<Item> items1 = one.getItemList();
    int iSize = items1.size();

    if(iSize>0)
    {
        Item i = items1.at(0);
        QPixmap q = i.getImage();
        int w = ui->image1_10->width();
        int h = ui->image1_10->height();
        ui->image1_10->setPixmap(q.scaled(w,h,Qt::KeepAspectRatio));
    }
    if(iSize>1)
    {
        Item i = items1.at(1);
        QPixmap q = i.getImage();
        int w = ui->image2_10->width();
        int h = ui->image2_10->height();
        ui->image2_10->setPixmap(q.scaled(w,h,Qt::KeepAspectRatio));
    }
    if(iSize>2)
    {
        Item i = items1.at(2);
        QPixmap q = i.getImage();
        int w = ui->image3_10->width();
        int h = ui->image3_10->height();
        ui->image3_10->setPixmap(q.scaled(w,h,Qt::KeepAspectRatio));
    }





    //setting museum2
    if(i>=size)
    {
        i = 0;
    }
    Museum two = musList.at(i++);
    name2 = two.getName();
    desc2 = two.getDescription();
    owner2 = two.getOwner();

    ui->mName2_4->setText(QString::fromStdString(name2));
    ui->visit2_4->setText("Visit "+QString::fromStdString(name2));
    ui->description2_4->setText(QString::fromStdString(desc2));
    ui->own2->setText("Owner: "+QString::fromStdString(owner2));

    //setting images for museum 2
    two.getMuseumItems();
    vector<Item> items2 = two.getItemList();
    int iSize2 = items2.size();

    if(iSize2>0)
    {
        Item i = items2.at(0);
        QPixmap q = i.getImage();
        int w = ui->image1_11->width();
        int h = ui->image1_11->height();
        ui->image1_11->setPixmap(q.scaled(w,h,Qt::KeepAspectRatio));
    }
    if(iSize2>1)
    {
        Item i = items2.at(1);
        QPixmap q = i.getImage();
        int w = ui->image2_11->width();
        int h = ui->image2_11->height();
        ui->image2_11->setPixmap(q.scaled(w,h,Qt::KeepAspectRatio));
    }
    if(iSize2>2)
    {
        Item i = items2.at(2);
        QPixmap q = i.getImage();
        int w = ui->image3_11->width();
        int h = ui->image3_11->height();
        ui->image3_11->setPixmap(q.scaled(w,h,Qt::KeepAspectRatio));
    }


    //setting museum3
    if(i>=size)
    {
        i = 0;
    }
    Museum three = musList.at(i++);
    name3 = three.getName();
    desc3 = three.getDescription();
    owner3 = three.getOwner();

    ui->mName3_4->setText(QString::fromStdString(name3));
    ui->visit3_4->setText("Visit "+QString::fromStdString(name3));
    ui->description3_4->setText(QString::fromStdString(desc3));
    ui->own3->setText("Owner: "+QString::fromStdString(owner3));

    //setting images for museum 3
    three.getMuseumItems();
    vector<Item> items3 = three.getItemList();
    int iSize3 = items3.size();

    if(iSize3>0)
    {
        Item i = items3.at(0);
        QPixmap q = i.getImage();
        int w = ui->image1_12->width();
        int h = ui->image1_12->height();
        ui->image1_12->setPixmap(q.scaled(w,h,Qt::KeepAspectRatio));
    }
    if(iSize3>1)
    {
        Item i = items3.at(1);
        QPixmap q = i.getImage();
        int w = ui->image2_12->width();
        int h = ui->image2_12->height();
        ui->image2_12->setPixmap(q.scaled(w,h,Qt::KeepAspectRatio));
    }
    if(iSize3>2)
    {
        Item i = items3.at(2);
        QPixmap q = i.getImage();
        int w = ui->image3_12->width();
        int h = ui->image3_12->height();
        ui->image3_12->setPixmap(q.scaled(w,h,Qt::KeepAspectRatio));
    }



}


