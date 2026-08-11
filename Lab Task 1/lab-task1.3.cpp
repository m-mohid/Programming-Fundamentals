#include<iostream>
using namespace std;
int main ()
{
    int a = 10;
    int b = 2;

    int Add, Sub, Mul, Div;

    Add = a + b;
    Sub = a - b;
    Mul = a * b;
    Div = a / b;

    cout << "The sum of the numbers is: " << Add << endl;
    cout << "The difference of the numbers is: " << Sub << endl;
    cout << "The product of the numbers is: " << Mul << endl;
    cout << "The division of the numbers is: " << Div << endl;

    return 0;
}