#include <iostream>
#include "collection.h"
#include "museum.h"

using namespace std;

int main()
{
   //Creates a Museum
   Museum m;

   //Adds Collection called Collection1 to the museum
   m.addCollection("Collection1");

   //Adds Item to Collection1 with name, description, and artist
   m.col.at(0).addItem("item1", "Its a Painting", "Ryan");
}
