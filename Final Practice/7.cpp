#include<iostream>
using namespace std;

int max_value ( int arr [ ] )
{
    int max = arr [ 0 ];

    for ( int ind = 1; ind < 8; ind++ )
    {
        if ( max < arr [ ind ] )
        {
            max = arr [ ind ];
        }
    }

    return max;
}

int min_value ( int arr [ ] )
{
    int min = arr [ 0 ];

    for ( int ind = 1; ind < 8; ind++ )
    {
        if ( min > arr [ ind ] )
        {
            min = arr [ ind ];
        }
    }

    return min;
}

int main()
{
    int arr [ 8 ];

    cout << "Enter eight integer values: " << endl;

    for ( int ind = 0; ind < 8; ind++ )
    {
        cout << "Value " << ind + 1 << ": ";
        cin >> arr [ ind ];
    }

    cout << "The maximum value in the array is: " << max_value ( arr ) << endl;
    cout << "The minimum value in the array is: " << min_value ( arr ) << endl;

    return 0;
}