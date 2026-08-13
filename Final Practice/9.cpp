#include<iostream>
using namespace std;

int calculate ( int *c )
{
    int sum = 0;
    
    for ( int ind = 0; ind < 5; ind++ )
    {
        if ( *( c + ind ) % 2 != 0 )
        {
            sum = sum + *( c + ind );
        }
    }

    return sum;
}

int main()
{
    int arr [ 5 ];
    int *p = arr;

    cout << "Enter five integers: " << endl;

    for ( int ind = 0; ind < 5; ind++ )
    {
        cout << "Value " << ind + 1 << ": ";
        cin >> arr [ ind ];
    }

    cout << "The sum of odd numbers is: " << calculate ( p ) << endl;

    return 0;
}