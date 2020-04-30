#include "museum.h"

Museum::Museum()
{

}

string Museum::getName()
{
    return name;
}

string Museum::getDescription()
{
    return description;
}

vector<Item> Museum::getItemList()
{
    return itemList;
}

