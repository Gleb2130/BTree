#include <iostream>
#include <initializer_list>
#include <cassert>
//! #include <string>

using namespace std;

#include "Tree.h"

int main()
{
    BTree<int,int>t;
    t.push(3,3);
    t.push(2,2);
    t.push(9,9);
    t.push(5,5);
    t.push(5,5);
    t.push(7,7);

    t.print();
}

