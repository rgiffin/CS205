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
    string getItemOwner();

    string comment;
    string user;
    string item;
    string approved;
    string itemOwner;
};

#endif // COMMENT_H
