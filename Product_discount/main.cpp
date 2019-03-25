
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
    
    cout<<endl<<endl<<endl;
    cout << "Phase 2: ";
    cout << "User Input," << endl;
    _userInput(_array);
    cout<<endl;
    return 0;
} // end main
