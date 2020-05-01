#include "museum.h"

Museum::Museum()
{

}

string Museum::getName()
{
    return name;
}

string Museum::getDescription()
{
    return description;
}

string Museum::getOwner()
{
    return owner;
}


vector<Item> Museum::getItemList()
{
    return itemList;
}

//Takes museum name and sets itemList equal to it
void Museum::getMuseumItems()
{
    vector<Item> retVector;
    Item item1;

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
    s1.append(name);
    s1.append("'");
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());
    cout << s2 << endl;
    QSqlQuery query;

    //Checks if code can be run, then checks if it comes up with a match
    if(!query.exec(s2))
    {
        cout << "DATABASE MALFUNCTION";
    }

    while(query.next())
    {
        item1.name = query.value(0).toString().toStdString();
        item1.description = query.value(1).toString().toStdString();
        item1.artist = query.value(2).toString().toStdString();
        item1.owner = query.value(3).toString().toStdString();
        item1.museum = query.value(4).toString().toStdString();
        item1.collection = query.value(5).toString().toStdString();
        item1.filename = query.value(6).toString().toStdString();

         QByteArray outByteArray = query.value(7).toByteArray();
         QPixmap outputpix;
         outputpix.loadFromData(outByteArray);
         item1.image = outputpix;

         retVector.push_back(item1);
    }

    itemList = retVector;
}
