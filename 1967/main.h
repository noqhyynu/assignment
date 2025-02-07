#include <iostream>

using namespace std;

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

void operate(char oprt,auto x, auto y){
    cout << "\n======Choose Operator======\n";
    cout << "1. For Addition, Enter '+'\n";
    cout << "2. For Subtraction, Enter '-'\n";
    cout << "3. For Division, Enter '/'\n";
    cout << "4. For Multiplication, Enter 'x'\n";
    cout << "Operation: ";
    cin >> oprt;
    cout << endl;

    switch(oprt){
    case '+':
        cout << x << " + " << y << " = " << add(x,y) << endl;
        break;
    case '-':
        cout << x << " - " << y << " = " << subtract(x,y) << endl;
        break;
    case '/':
        cout << x << " / " << y << " = " << divide(x,y) << endl;
        break;
    case 'x':
        cout << x << " x " << y << " = " << multiply(x,y) << endl;
        break;
    default:
        cout << "Invalid Operator\n";
    }
}
