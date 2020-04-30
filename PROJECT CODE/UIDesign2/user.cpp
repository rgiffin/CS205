#include "user.h"

User::User()
{
    name = "";
    username = "";
    password = "";
    email = "";
    type = "";
}

User::User(std::string n, std::string u, std::string p, std::string e, std::string t)
{
     name = n;
     username = u;
     password = p;
     email = e;
     type = t;
}


std::string User::getName()
{
    return name;
}
std::string User::getUsername()
{
    return username;
}
std::string User::getPassword()
{
    return password;
}
std::string User::getEmail()
{
    return email;
}
std::string User::getType()
{
    return type;
}

bool User::ifCurator()
{
    if(type == "curator" || type == "Curator")
        return true;
    return false;
}

void User::setUsername(std::string u)
{
    username = u;
}

void User::setPassword(std::string pass)
{
    password = pass;
}

//Sets all the values when user is input
void User::getAccInfo(string user)
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

    //Creates SQL Query
    string s1 = "SELECT * FROM userTable WHERE user = ";
    s1.append("'");
    s1.append(user);
    s1.append("'");
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());
    QSqlQuery query;
    //Checks if code can be run, then checks if it comes up with a match
    if(!query.exec(s2))
    {
        cout << "DATABASE MALFUNCTION";
    }
    query.next();
    QString q1 = query.value(1).toString();
    password =  q1.toStdString();

    QString q2 = query.value(2).toString();
    name = q2.toStdString();

    QString q3 = query.value(3).toString();
    email = q3.toStdString();

    QString q4 = query.value(4).toString();
    type = q4.toStdString();
}
