#include "login.h"
#include <QtSql>
#include <QApplication>
#include <QGuiApplication>
#include <vector>
#include <iostream>
#include <QtWidgets>
#include "item.h"
#include "comment.h"

using namespace std;

QSqlDatabase db;

//Used only once to setup the user and item databases
void openDatabases()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }
    QSqlQuery query;
    query.exec("create table itemTable (name varchar(100), description varchar(500), artist varchar(100), owner varchar(100), museum varchar(100), collection varchar(100), filename TEXT, imagedata BLOB)");
    query.exec("create table userTable (user varchar(50), pass varchar(50), name varchar(50), email varchar(75), type varchar(10))");
    query.exec("create table commentTable (comment varchar(300), user varchar(200), item varchar(100), approved varchar(10), itemOwner varchar(100))");
    query.exec("create table museumTable (name varchar(300), description varchar(500), owner varchar(200))");
}

//Creates new comment in SQL Database, uses itemName to figure out itemOwner
void addComment(string comment, string user, string item, string approval)
{
    QSqlDatabase db;
    //connect to database
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");

    //Opens database
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }

    string s1 = "SELECT owner from itemTable WHERE name = '";
    s1.append(item);
    s1.append("'");
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());
    QSqlQuery query;
    query.exec(s2);

    string ownerName;
    if(query.first())
    {
          ownerName = query.value(0).toString().toStdString();
    }

    //Creating query from input
    s1 = "insert into commentTable values('";
    s1.append(comment);
    s1.append("', '");
    s1.append(user);
    s1.append("', '");
    s1.append(item);
    s1.append("', '");
    s1.append(approval);
    s1.append("', '");
    s1.append(ownerName);
    s1.append("')");
    char s3[s1.size()+1];
    strcpy(s3,s1.c_str());

    //Adds the item created to the table
    query.exec(s3);
}

//takes the item, comment, and commenter's username and sets the approval to true
void approveComment(string item, string comment, string user)
{
    QSqlDatabase db;
    //connect to database
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");

    //Opens database
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }
    //Creating query from input

    string s1 = "UPDATE commentTable SET approved = 'true' WHERE comment = '";
    s1.append(comment);
    s1.append("' AND item = '");
    s1.append(item);
    s1.append("' AND user = '");
    s1.append(user);
    s1.append("'");
    cout << s1 << endl;
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());

    //Adds the item created to the table
    QSqlQuery query;
    query.exec(s2);
}

//Returns a vector of  APPROVED comments for the given item
vector<Comment> getItemComments(string itemName)
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

    string s1 = "SELECT * FROM commentTable WHERE approval = 'true' AND item = '";
    s1.append(itemName);
    s1.append("'");
    cout << s1 << endl;
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

//Shows the comments that an owner of a user can approve, returns vector of not yet approved comments


//Gets Item Object from item name
Item getItemFromName(string name)
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

//Gets Museum Object from the museum name
Museum getMuseumFromName(string name)
{
    Museum retMus;
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

    string s1 = "SELECT * FROM museumTable WHERE name = '";
    s1.append(name);
    s1.append("'");
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());

    QSqlQuery query;
    query.exec(s2);

    if(query.first())
    {
        retMus.name = query.value(0).toString().toStdString();
        retMus.description = query.value(1).toString().toStdString();
        retMus.owner = query.value(2).toString().toStdString();
    }
    else
    {
        retMus.name = "dne";
    }

    cout << retMus.name << endl;
    cout << retMus.description << endl;
    return retMus;
}

int main(int argc, char *argv[])
{
    openDatabases();
    getMuseumFromName("mus1");
    QApplication a(argc, argv);
    Login w;
    w.show();
    return a.exec();
}
