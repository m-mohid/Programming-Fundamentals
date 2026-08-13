#include<iostream>
using namespace std;

int sumArray ( int arr [ ], int size )
{
    int sum = 0;

    for ( int ind = 0; ind < size; ind ++ )
    {
        sum = sum + arr [ ind ];
    }

    return sum;
}

int main()
{
    int arr [ 5 ];

    cout << "Enter five integers: " << endl;

    for ( int ind = 0; ind < 5; ind++ )
    {
        cout << "Enter Value " << ind + 1 << ": ";
        cin >> arr [ ind ];
    }

    cout << "The sum off all elements entered is: " << sumArray ( arr, 5 );

    return 0;
}