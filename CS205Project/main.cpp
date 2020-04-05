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
   m.col.at(0).addItem("item8", "Its a Sculpture", "Vinci");

   //Prints Item description and artist when given a name
   m.col.at(0).getItemArtist("item8");


}
