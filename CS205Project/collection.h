#ifndef COLLECTION_H
#define COLLECTION_H
#include <iostream>
#include <string>
#include <QtSql>
#include<QSqlQuery>


using namespace std;

class Collection
{
public:

    Collection();
    string name;
    QSqlDatabase db;
    void createTable();
    bool addItem(string, string, string);
};

#endif // COLLECTION_H
