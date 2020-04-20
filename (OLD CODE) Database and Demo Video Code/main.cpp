#include <iostream>
#include "collection.h"
#include "museum.h"

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

int main()
{
    createDatabases();

    /*
   //Creates a Museum
   Museum m;

   //Adds Collection called Collection1 to the museum
   m.addCollection("Collection1");

   //Adds Item to Collection1 with name, description, and artist
   m.col.at(0).addItem("item8", "Its a Sculpture", "Vinci");

   //Prints Item description and artist when given a name
   m.col.at(0).getItemArtist("item8");
   */
}


