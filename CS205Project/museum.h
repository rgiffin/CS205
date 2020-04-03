#ifndef MUSEUM_H
#define MUSEUM_H
#include <iostream>
#include <vector>
#include "collection.h"

using namespace std;

class Museum
{
public:
    vector<Museum> childMuseum;
    vector<Collection> col;
    Museum();
};

#endif // MUSEUM_H
