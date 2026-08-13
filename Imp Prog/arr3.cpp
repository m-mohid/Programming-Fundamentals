#include<iostream>
using namespace std;

void reverse_array ( int arr [ ], int size )
{
    cout << "{";
    for ( int ind = 0; ind < size; ind++ )
    {
        cout << arr [ 5 - ind - 1 ];
        if ( ind != 4 )
        {
            cout << " , ";
        }
    }
    cout << "}";
}

int main()
{
    int arr [ 5 ];

    cout << "Enter five integers: " << endl;

    for ( int ind = 0; ind < 5; ind++ )
    {
        cin >> arr [ ind ];
    }

    reverse_array ( arr , 5 );

    return 0;
}