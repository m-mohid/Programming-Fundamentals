#include<iostream>
using namespace std;
int main()
{
    int arr [ 6 ] = { 1, 2, 3, 4, 5, 6 };

    int *p = arr;

    cout << "Elements in Reverse Order are: " << endl;

    for ( int ind = 5; ind >= 0; ind--  )
    {
        cout << *( p + ind ) << endl;
    }

    return 0;
}