#include "collection.h"
using namespace std;
Collection::Collection()
{

}

void Collection::createTable()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("TestBase");
    QSqlQuery query;
    query.exec("create table cTable (id string name, description varchar(200), artist varchar(30))");
}

bool Collection::addItem(string x, string y, string z)
{
    QSqlQuery query;
     query.exec("insert into cTable values('Mona Lisa', 'A Painting', 'da Vinci')");
     return true;
}
