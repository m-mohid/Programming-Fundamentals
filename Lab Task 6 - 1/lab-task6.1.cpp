#include<iostream>
using namespace std;
int addition ( int a, int b )
{
    int add = a + b;
    return add;
}
int subtraction ( int a, int b )
{
    int subtract = a - b;
    return subtract;
}
int multiplication ( int a, int b )
{
    int multiply = a * b;
    return multiply;
}
float division ( float a, float b )
{
    float divide = a / b;
    return divide;
}

int main()
{
    int num_1;
    int num_2;
    string symbol;

    cout << "Enter 1st number: ";
    cin >> num_1;
    cout << "Enter 2nd number: ";
    cin >> num_2;
    cout << "Enter the arithmetic operation you want to perform ( +, -, *, / ): ";
    cin >> symbol;

    if ( symbol == "+" )
    {
        cout << "The sum is: " << addition ( num_1, num_2 ) << endl;
    }
    else if ( symbol == "-" )
    {
        cout << "The subtraction is: " << subtraction ( num_1, num_2 ) << endl;
    }
    else if ( symbol == "*" )
    {
        cout << "The product is: " << multiplication ( num_1, num_2 ) << endl;
    }
    else if ( symbol == "/" )
    {
        cout << "The division is: " << division ( num_1, num_2 ) << endl;
    }
    else
    {
        cout << "You entered incorrect value." << endl;
    }

    return 0;
}