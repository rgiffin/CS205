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

void User::setUsername(std::string u)
{
    username = u;
}

void User::setPassword(std::string pass)
{
    password = pass;
}
