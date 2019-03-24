
#include <iostream>
#include <string>
#include "Discont.h"
#include "TestArray.h"
using namespace std;

int main()
{
    Discount<std::string> _array;
    cout << "Testing the Array:" << endl;
    cout << "The initial _array is empty." << endl;
    _arrayTester(_array);
    cout << "All done!" << endl;
    
    cout<<endl;
    
    displayArr(_array);
    return 0;
} // end main
