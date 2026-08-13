#include<iostream>
using namespace std;

void print ( int *ptr, int value )
{
    cout << "Value of the integer variable: " << value << endl;
    cout << "Value obtained by dereferencing the pointer: " << *ptr << endl;
}

int main()
{
    int var = 10;
    int *p = &var;

    print ( p, var );

    return 0;
}