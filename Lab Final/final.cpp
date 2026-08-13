#include<iostream>
using namespace std;

/* 2.Create a function passByValue() that receives the array by value 
and modifies its elements (for example, multiply each element by 2) */

void passByValue ( int arr [ ], int size )
{
    for ( int ind = 0; ind < 5; ind++ )
    {
        arr [ ind ] * 2;
    }

}

/* 3.Create another function passByReference() that receives the same 
array by reference and modifies its elements (for example, add 5 to each element) */

void passByReference ( int (&arr)[ 5 ] )
{
    for ( int ind = 0; ind < 5; ind++ )
    {
        arr [ ind ] = arr [ ind ] + 5;
    }

}

int main()
{
    /* 1.Create a one-dimensional integer array in the main() 
    function and initialize it with some values */

    int arr [ 5 ] = { 1, 2, 3, 4, 5 }; 

    /* 5.1 Before Function Calls */

    cout << "Array before function call: " << endl;

    for ( int ind = 0; ind < 5; ind++ )
    {
        cout << arr [ ind ] << " ";
    }

    cout << endl;

    /* 4.1 Pass by Value Function is called */

    passByValue ( arr, 5 );

    /* 5.2 Array after Pass by Value function is called */

    cout << "Array after pass by value function: " << endl;

    for ( int ind = 0; ind < 5; ind++ )
    {
        cout << arr [ ind ] << " ";
    }

    cout << endl;

    /* 4.2 Pass by Reference Function is called */

    passByReference ( arr );

    /* 5.3 Array after Pass by Reference function is called */

    cout << "Array after pass by reference function: " << endl;

    for ( int ind = 0; ind < 5; ind++ )
    {
        cout << arr [ ind ] << " ";
    }

    cout << endl;

    return 0;
}