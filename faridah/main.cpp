#include <iostream>

using namespace std;

//write a simple c++ code for a simple calculator and
//it should be arithmetic functions and only integers and float

auto get_value(){
    auto y{0};
    cin >> y;
    return y;
}

//Addition
auto add(auto a, auto b){
    return a+b;
}

//Subtraction
auto subtract(auto a, auto b){
    return a-b;
}

//Division
auto divide(auto a, auto b){
    return a/b;
}

//Multiplication
auto multiply(auto a, auto b){
    return a*b;
}


int operation(){
    char oprt{};
    auto x{0};
    auto y{0};

    cout << "\n======Choose Operation======\n";
    cout << "For Addition, press '+'\n";
    cout << "For Subtraction, press '-'\n";
    cout << "For Division, press '/'\n";
    cout << "For Multiplication, press 'x'\n";
    cout << "Operation: ";
    cin >> oprt;
    switch(oprt){
    case '+':
        return add(x,y);
        break;
    case '-':
        return subtract(x,y);
        break;
    case '/':
        return divide(x,y);
        break;
    case 'x':
        return multiply(x,y);
        break;
    default:
        cout << "Invalid Operation\n";
    }
}

void print(int x){
    cout << x<<endl;
}

int main()
{
    print(operation());
    return 0;
}
