#include "login.h"
#include <QtSql>
#include <QApplication>
#include <iostream>

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
    query.exec("create table itemTable (name varchar(100), description varchar(500), artist varchar(100), owner varchar(100), museum varchar(100), collection varchar(100))");
    query.exec("create table userTable (user varchar(50), pass varchar(50), name varchar(50), email varchar(75), type varchar(10))");
    query.exec("create table commentTable (comment varchar(300), user varchar(200), item varchar(100))");
    query.exec("create table museumTable (museum varchar(300), owner varchar(200))");
}

int main(int argc, char *argv[])
{
    openDatabases();
    QApplication a(argc, argv);
    Login w;
    w.show();
    return a.exec();
}
