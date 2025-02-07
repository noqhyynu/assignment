#include <iostream>
#include "main.h"

using namespace std;

//write a simple c++ code for a simple calculator and
//it should be arithmetic functions and only integers and float


int main()
{
    char oprt{};
    auto x{0.0};
    auto y{0.0};

    cout << "Enter a value for x: " ;
    cin >> x;
    cout << "Enter a value for y: " ;
    cin >> y;

    operate(oprt,x,y);

    return 0;
}
