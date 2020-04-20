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
    bool addItem(string, string, string);
    bool getItemArtist(string);
};

#endif // COLLECTION_H
