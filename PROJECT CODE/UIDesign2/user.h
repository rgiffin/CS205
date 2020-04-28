#ifndef USER_H
#define USER_H
#include<QtSql>
#include<QSqlQuery>
#include "iostream"

using namespace std;


class User
{
public:
    User();

    User(std::string name, std::string username,
         std::string password, std::string email, std::string type);


    std::string getName();
    std::string getUsername();
    std::string getPassword();
    std::string getEmail();
    std::string getType();
    void getAccInfo(string);

    void setUsername(std::string uname);
    void setPassword(std::string pass);

private:
    std::string name, username, password, email, type;

};

#endif // USER_H
