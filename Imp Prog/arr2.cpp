#include<iostream>
using namespace std;

int largest_num ( int arr [ ] , int size )
{
    int max = arr [ 0 ];

    for ( int ind = 1; ind < size; ind++ )
    {
        if ( max < arr [ ind ] )
        {
            max = arr [ ind ];
        }
    }

    return max;
}

int smallest_num ( int arr [ ] , int size )
{
    int min = arr [ 0 ];

    for ( int ind = 1; ind < size; ind++ )
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
    int arr [ 5 ];
    int max = 0;
    int min = 0;

    cout << "Enter five integers: " << endl;

    for ( int ind = 0; ind < 5; ind++ )
    {
        cin >> arr [ ind ];
    }

    max = largest_num ( arr , 5 );
    min = smallest_num ( arr , 5 );

    cout << "The largest number in array is: " << max << endl;
    cout << "The smallest number in array is: " << min << endl;

    return 0;
}