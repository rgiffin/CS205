#ifndef MUSEUM_H
#define MUSEUM_H
#include <iostream>
#include <vector>
#include <string>
#include "collection.h"

using namespace std;

class Museum
{
public:
    vector<Museum> childMuseum;
    vector<Collection> col;
    string name;
    Museum();
   void addCollection(string);
   void addChild(string);
};

#endif // MUSEUM_H
