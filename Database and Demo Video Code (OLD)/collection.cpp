#include "collection.h"
using namespace std;
Collection::Collection()
{
}

bool Collection::addItem(string name, string desc, string artist)
{
    //Creating query from input
    string s1 = "insert into cTable values('";
    s1.append(name);
    s1.append("', '");
    s1.append(desc);
    s1.append("', '");
    s1.append(artist);
    s1.append("')");
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());

    //Adds the item created to the table
    QSqlQuery query;
     query.exec(s2);
     return true;
}

bool Collection::getItemArtist(string s)
{
    string s1 = "SELECT artist FROM cTable WHERE id = ";
    s1.append("'");
    s1.append(s);
    s1.append("'");
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());
    QSqlQuery query;
    query.exec(s2);
    while (query.next()) {
            QString name = query.value(0).toString();
            qDebug() << name;
    }
    return true;
}


