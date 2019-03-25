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
bool Discount<T>::_get_the_Intem(const T& _intem){
    bool _hasRoom = (this -> _intem < this ->_maxIntem);// Checking if the array has space
    if(_hasRoom)
    {
        this ->_intemArray[(*this)._intem] = _intem;//
        this ->_intem++;// increment _intem
    }
    return _hasRoom;//returning the result as a boolean vealue
}//end function

template <class T>
std::vector<T>Discount<T>::_toVector() const{
    std::vector<T> bagContent;
    for(int i=0; i<this ->_intem; i++)
        bagContent.push_back(this ->_intemArray[i]);
    return bagContent;
    
}

template<class T>
int Discount<T>::_CurrentSize() const{
    return this ->_intem;
}

template<class T>
bool Discount<T>::_empty() const{
    return this ->_intem == 0;
}

template<class T>
void Discount<T>::clear(){
    this -> _intem = 0;
    
};

#endif /* Discont_h */
