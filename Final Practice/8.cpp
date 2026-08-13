#include<iostream>
using namespace std;
int main()
{
    int arr [ 5 ] = { 5, 10, 15, 20, 25 };
    int *p = arr;

    for ( int ind = 0; ind < 5; ind++ )
    {
        *( p + ind ) = *( p + ind ) + 5;
    }

    cout << "---Updated Array---" << endl;

    for ( int ind = 0; ind < 5; ind++ )
    {
        cout << *( p + ind ) << endl;
    }

    return 0;
}