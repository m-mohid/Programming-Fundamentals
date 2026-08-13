#include<iostream>
using namespace std;

void print_reverse ( int *ptr, int size )
{
    ptr = ptr + ( size - 1 );

    for ( int ind = 0; ind < 5; ind++ )
    {
        cout << *ptr << endl;
        ptr--;
    }
}

int main()
{
    int arr [ 5 ] = { 10, 20, 30, 40, 50 };
    int *p = arr;

    print_reverse ( p, 5 );

    return 0;
}