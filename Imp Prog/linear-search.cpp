#include<iostream>
using namespace std;
int main()
{
    int arr [ 16 ] = {1, 2, 3, 5, 6, 7, 8, 10, 12, 13, 15, 16, 18, 19, 20, 22};

    int i = 1;
    int x = 19;
    int location;

    while ( i <= 16 && x != arr [ i ] )
    {
        i = i + 1;
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