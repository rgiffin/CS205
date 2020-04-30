#ifndef COMMENT_H
#define COMMENT_H
#include <iostream>
#include <string>

using namespace std;

class Comment
{
public:
    Comment();
    string getComment();
    string getUser();
    string getItem();
    string getApproved();

    string comment;
    string user;
    string item;
    string approved;
};

#endif // COMMENT_H
