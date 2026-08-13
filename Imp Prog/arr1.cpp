#include<iostream>
using namespace std;
int main()
{
    int arr [ 10 ];
    int pos = 0;
    int neg = 0;
    int ze = 0;

    cout << "Enter 10 integers: " << endl;

    for ( int ind = 0; ind < 10; ind++ )
    {
        cin >> arr [ ind ];
    }

    for ( int ind = 0; ind < 10; ind++ )
    {
        if ( arr [ ind ] > 0 )
        {
            pos++;
        }
        else if ( arr [ ind ] < 0 )
        {
            neg++;
        }
        else
        {
            ze++;
        }
    }

    cout << "There are " << pos << " positive numbers." << endl;
    cout << "There are " << neg << " negative numbers." << endl;
    cout << "There are " << ze << " zero numbers." << endl;

    return 0;
}