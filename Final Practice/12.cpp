#include<iostream>
using namespace std;
int main()
{
    int arr [ 7 ];
    int *p = arr;

    for ( int ind = 0; ind < 7; ind++ )
    {
        cout << "Value " << ind + 1 << ": ";
        cin >> arr [ ind ];
    }

    cout << endl;

    for ( int ind = 0; ind < 7; ind++ )
    {
        if ( p [ ind ] % 2 == 0 )
        {
            p [ ind ] = p [ ind ] * 2;
        }
        else
        {
            p [ ind ] = p [ ind ] + 5;
        }
    }

    cout << "-----Final Array-----" << endl;

    for ( int ind = 0; ind < 7; ind++ )
    {
        cout << p [ ind ] << endl;
    }

    return 0;
}