#include "item.h"

using namespace std;

Item::Item()
{

}

Item::Item(string name1, string desc1, string art1, string own1, string mus1, string coll1, string file1, QPixmap img)
{
    name = name1;
    description = desc1;
    artist = art1;
    owner = own1;
    museum = mus1;
    collection = coll1;
    filename = file1;
    image = img;
}

string Item::getName()
{
    return name;
}

string Item::getDescription()
{
    return description;
}

string Item::getArtist()
{
    return artist;
}

string Item::getOwner()
{
    return owner;
}

string Item::getMuseum()
{
    return museum;
}

string Item::getCollection()
{
    return collection;
}

QPixmap Item::getImage()
{
    return image;
}
