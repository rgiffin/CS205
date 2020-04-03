#include <iostream>
#include "collection.h"

using namespace std;

int main()
{
    Collection c;
    c.createTable();
    c.addItem("Mona Lisa", "A Painting", "da Vinci");

    cout << "Hello World!" << endl;
    cout << "Hello Ryan" << endl;
    return 0;
}
