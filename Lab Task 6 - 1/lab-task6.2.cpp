#include<iostream>
using namespace std;
void positive_or_negative ( int a )
{
    if ( a < 0 )
    {
        cout << "The number " << a << " is negative." << endl;
    }
    else if ( a > 0 )
    {
        cout << "The number " << a << " is positive." << endl;
    }
    else
    {
        cout << "The number is zero." << endl;
    }
}
void even_or_odd ( int b )
{
    if ( b % 2 == 0 )
    {
        cout << "The number " << b << " is even." << endl;
    }
    else
    {
        cout << "The number " << b << " is odd." << endl;
    }
}

int main()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;

    positive_or_negative ( num );
    even_or_odd ( num );

    return 0;
}