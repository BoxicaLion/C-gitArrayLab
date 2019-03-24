//
//  ArraP.cpp
//  Product_discount
//
//  Created by Baron on 3/23/19.
//  Copyright © 2019 Baron. All rights reserved.
//

#include "Discont.h"

#ifndef ArraP_cpp
#define ArraP_cpp
template<class T>
Discount<T>::Discount(): _intem(0), _maxIntem(NR)
{
    
}

template<class T>
Discount<T>::~Discount(void) {
    std::cout << "Object is being deleted!" << std::endl;
}   // Destructor

template<class T>
bool Discount<T>::_get_the_Intem(const T& newIntem){
    bool _hasRoom = (_intem < _maxIntem);// Checking if the array has space
    if(_hasRoom)
    {
        _intemArray[_intem] = newIntem;//
        _intem++;// increment _intem
    }
    return _hasRoom;//returning the result as a boolean vealue
}//end function

template <class T>
std::vector<T>Discount<T>::_toVector() const{
    std::vector<T> bagContent;
    for(int i=0; i<_intem; i++)
        bagContent.push_back(_intemArray[i]);
    return bagContent;
    
}

template<class T>
int Discount<T>::_CurrentSize() const{
    return _intem;
}

template<class T>
bool Discount<T>::_empty() const{
    return _intem == 0;
}

template<class T>
void Discount<T>::clear(){
    this -> _intem = 0;
    
};

#endif /* Discont_h */
