#include<iostream>
using namespace std;
int main()
{
    int arr [ 16 ] = {1, 2, 3, 5, 6, 7, 8, 10, 12, 13, 15, 16, 18, 19, 20, 22};

    int x = 19;
    int location;

    int i = 0;
    int j = 15  ;
    int m;

    while ( i < j )
    {
        int m = ( i + j ) / 2;

        if ( x > arr [ m ] )
        {
            i = m + 1;
        }
        else
        {
            j = m;
        }
    }

    if ( i <= 16 )
    {
        location = i;
    }
    else
    {
        location = 0;
    }

    cout << "The location of 19 in array is: " << location << endl;

    return 0;
}