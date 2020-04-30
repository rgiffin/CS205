#ifndef MUSEUM_H
#define MUSEUM_H
#include <iostream>
#include <string>
#include <vector>
#include "item.h"

using namespace std;

class Museum
{
public:
    Museum();
    string getName();
    string getDescription();
    string getOwner();

    string name;
    string description;
    string owner;
};

#endif // MUSEUM_H
