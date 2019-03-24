//
//  Discont.h
//  Product_discount
//
//  Created by Baron on 3/23/19.
//  Copyright © 2019 Baron. All rights reserved.
//
#include<iostream>
#include <vector>

#ifndef Discont_h
#define Discont_h



template<class T>
class Discount
{
    
private:
    static const int NR = 7;
    T _intemArray[NR];
    int _intem;
    int _maxIntem;
    
public:
    Discount();
    ~Discount();// Destructor
    bool isEmpty();
    bool _get_the_Intem(const T& newIntem);
    int _CurrentSize() const;
    bool _empty() const;
    void clear();
    std::vector<T> _toVector() const;
    
    
};

#include "ArraP.cpp"
#endif /* Discont_h */
