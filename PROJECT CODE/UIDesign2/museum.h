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
    vector<Item> getItemList();

    string name;
    string description;
    string owner;
    vector<Item> itemList;
};

#endif // MUSEUM_H
