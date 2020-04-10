#include "login.h"
#include <QtSql>
#include <QApplication>
#include <iostream>

using namespace std;

void createDatabases() //Used only once to setup the user and item databases
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }
    QSqlQuery query;
    query.exec("create table itemTable (name varchar(100), description varchar(200), artist varchar(30))");
    query.exec("create table userTable(username varchar(50), pass varchar(50), id int(50))");
}

int main(int argc, char *argv[])
{
    createDatabases();
    QApplication a(argc, argv);
    Login w;
    w.show();
    return a.exec();
}
