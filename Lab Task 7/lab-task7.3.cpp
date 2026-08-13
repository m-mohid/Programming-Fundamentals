#include<iostream>
using namespace std;
int main()
{
    int arr [ 10 ];
    cout << "Enter ten integers: " << endl;

    for ( int ind = 0; ind < 10; ind++ )
    {
        cin >> arr [ ind ];
    }

    cout << endl;
    cout << "Array in reverse order: " << endl;

    for ( int ind = 0; ind < 10; ind++ )
    {
        cout << arr [ 9 - ind ] << " ";
    }

    return 0;
}