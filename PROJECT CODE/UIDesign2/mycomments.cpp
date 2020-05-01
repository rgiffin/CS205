#include "mycomments.h"
#include "ui_mycomments.h"
#include "user.h"

MyComments::MyComments(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyComments)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logoMM->width();
    int height = ui->logoMM->height();
    ui->logoMM->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
}

MyComments::~MyComments()
{
    delete ui;
}


void MyComments::on_accountButton_clicked()
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
void MyComments::on_homeButton_clicked()
{
    mm = new MuseumMain();
    mm->setUName(username);
    mm->show();
    hide();
}


void MyComments::on_mListButton_clicked()
{
    ml = new MuseumList();
    ml->setUName(username);
    ml->show();
    hide();
}


void MyComments::on_itemsViewedButton_clicked()
{
    iv = new ItemsViewed();
    iv->setUName(username);
    iv->show();
    hide();

}

void MyComments::setUName(std::string u)
{
    username = u;
    comments = commentsApproved(username);
    index = 0;
    display(0);
}

std::string MyComments::getUName()
{
    return username;
}

vector<Comment> MyComments::commentsApproved(std::string user)
{
    QSqlDatabase db;
    Comment c;
    vector<Comment> retVector;
    //connect to database
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");

    //Opens database
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }

    string s1 = "SELECT * FROM commentTable WHERE approved = 'true' AND user = '";
    s1.append(user);
    s1.append("'");
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());

    QSqlQuery query;
    query.exec(s2);

    while(query.next())
    {
        c.comment = query.value(0).toString().toStdString();
        c.user = query.value(1).toString().toStdString();
        c.item = query.value(2).toString().toStdString();
        c.approved = query.value(3).toString().toStdString();
        c.itemOwner = query.value(4).toString().toStdString();

        retVector.push_back(c);
    }

    return retVector;
}

Item MyComments::getItemFromName(string name)
{
    Item retItem;
    QSqlDatabase db;
    Comment c;
    //connect to database
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");

    //Opens database
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }

    string s1 = "SELECT * FROM itemTable WHERE name = '";
    s1.append(name);
    s1.append("'");
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());

    QSqlQuery query;
    query.exec(s2);

    if(query.first())
    {
        retItem.name = query.value(0).toString().toStdString();
        retItem.description = query.value(1).toString().toStdString();
        retItem.artist = query.value(2).toString().toStdString();
        retItem.owner = query.value(3).toString().toStdString();
        retItem.museum = query.value(4).toString().toStdString();
        retItem.collection = query.value(5).toString().toStdString();
        retItem.filename = query.value(6).toString().toStdString();

        QByteArray outByteArray = query.value(7).toByteArray();
        QPixmap outputpix;
        outputpix.loadFromData(outByteArray);
        retItem.image = outputpix;
    }
    else
    {
        retItem.name = "dne";
    }
    return retItem;
}

void MyComments::display(int i)
{
    int size = comments.size();
    if(size == 0)
    {
        return;
    }

    if(i>=size)
    {
        i =0;
    }
    Comment one = comments.at(i++);
    ui->comment1->setText(QString::fromStdString(one.getComment()));
    Item e = getItemFromName(one.getItem());
    ui->image1->setPixmap(e.getImage());
    ui->item1->setText("Item: " + QString::fromStdString(e.getName()));

    if(i>=size)
    {
        i =0;
    }
    Comment two = comments.at(i++);
    ui->comment2->setText(QString::fromStdString(two.getComment()));
    e = getItemFromName(two.getItem());
    ui->image2->setPixmap(e.getImage());
    ui->item1_2->setText("Item: " + QString::fromStdString(e.getName()));


    if(i>=size)
    {
        i =0;
    }
    Comment three = comments.at(i++);
    ui->comment2->setText(QString::fromStdString(three.getComment()));
    e = getItemFromName(three.getItem());
    ui->image3->setPixmap(e.getImage());
    ui->item3->setText("Item: " + QString::fromStdString(e.getName()));


    index = i;
}

void MyComments::on_next_clicked()
{
    //next button clicked
    display(index);
}

void MyComments::on_previous_clicked()
{
    index = index-4;
    if(index<0)
    {
        index = 0;
    }
    display(index);
}
