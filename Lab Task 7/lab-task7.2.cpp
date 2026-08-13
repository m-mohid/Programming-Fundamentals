#include<iostream>
using namespace std;
int main()
{
    int arr [ 7 ];
    int multiple = 0;
    cout << "Enter seven integers: " << endl;

    for ( int ind = 0; ind < 7; ind++ )
    {
        cin >> arr [ ind ];
    }

    cout << endl;

    for ( int ind = 0; ind < 7; ind++ )
    {
        if ( arr [ ind ] % 5 == 0 )
        {
            multiple ++;
        }
    }

    cout << "There are " << multiple << " multiples of five in the array." << endl;

    return 0;
}