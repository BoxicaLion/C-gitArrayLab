//
//  TestArray.h
//  Product_discount
//
//  Created by Baron on 3/23/19.
//  Copyright © 2019 Baron. All rights reserved.
//
#include"Discont.h"
using namespace std;
#ifndef TestArray_h
#define TestArray_h

void displayArr(Discount<std::string>& _array)
{
    cout << "The array contains " << _array._CurrentSize()
    << " items:" << endl;
    std::vector<std::string> _arryItems = _array._toVector();
    
    int numberOfEntries = (int)_arryItems.size();
    for (int i = 0; i < numberOfEntries; i++)
    {
        cout << _arryItems[i] << " ";
    }  // end for
    cout << endl << endl;
}  // end displayBag

void _arrayTester(Discount<std::string>& _array)
{
    cout << "_empty: returns " << _array._empty()
    << "; should be 1 (true)" << endl;
    displayArr(_array);
    
    std::string items[] = {"one", "two", "three", "four", "five", "six"};
    cout << "Add 6 items to the array: " << endl;
    for (int i = 0; i < 6; i++)
    {
        _array._get_the_Intem(items[i]);
    }  // end for
    
    displayArr(_array);
    
    cout << "_empty: returns " << _array._empty()
    << "; should be 0 (false)" << endl;
    
    cout << "_CurrentSize: returns " << _array._CurrentSize()
    << "; should be 6" << endl;
    
    cout << "Try to add another entry: add(\"extra\") returns "
    << _array._get_the_Intem("extra") << endl;
}

void _displayArray(Discount<std::string>& _array)
{
    std::string items[] = {"one", "two", "three", "four", "five", "six"};
    for (int i = 0; i < 6; i++)
    {
        _array._get_the_Intem(items[i]);
        
    }  // end for
    displayArr(_array);
}


#endif /* TestArray_h */
