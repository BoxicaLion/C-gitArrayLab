//
//  TestArray.h
//  Product_discount
//
//  Created by Baron on 3/23/19.
//  Copyright © 2019 Baron. All rights reserved.
//
#include<string>
#include"Discont.h"
using namespace std;
#ifndef TestArray_h
#define TestArray_h

void _displayArr(Discount<std::string>& _array)
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
    _displayArr(_array);
    
    std::string items[] = {"one", "two", "three", "four", "five", "six"};
    cout << "Add 6 items to the array: " << endl;
    for (int i = 0; i < 6; i++)
    {
        _array._get_the_Intem(items[i]);
    }  // end for
    
    _displayArr(_array);
    
    cout << "_empty: returns " << _array._empty()
    << "; should be 0 (false)" << endl;
    
    cout << "_CurrentSize: returns " << _array._CurrentSize()
    << "; should be 6" << endl;
    
    cout << "Try to add another entry: add(\"extra\") returns "
    << _array._get_the_Intem("extra") << endl;
    _displayArr(_array);
}


void _userInput(Discount<std::string>& _array2){
    std::vector<std::string>_arryItems = _array2._toVector();
    _array2.clear();
    
    int numberOfEntries = (int)_arryItems.size();
    std::string items[numberOfEntries];
    
    numberOfEntries = 3;
    
    cout<<"Type the name of the intems that you want to add:";
    
    for (int i = 0; i < numberOfEntries; i++)
    {
        getline(cin,items[i]);
        _array2._get_the_Intem(items[i]);
    }  // end for
    
    cout<<"The array contains:";
    for (int i = 0; i < numberOfEntries; i++)
    {
        cout << items[i] << " ";
    }  // end for
    cout << "\n_CurrentSize: returns " << _array2._CurrentSize();
    cout << endl << endl;
}


#endif /* TestArray_h */
