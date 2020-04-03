#include "museum.h"

Museum::Museum()
{

}

//Adds a new collection to the museum with name s
void Museum::addCollection(string s)
{
    Collection c;
    c.name = s;
    col.push_back(c);
}

//Adds a new museum as a child with name s
void Museum::addChild(string s)
{
    Museum m;
    m.name = s;
    childMuseum.push_back(m);
}
