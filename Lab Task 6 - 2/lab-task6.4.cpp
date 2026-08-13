#include<iostream>
using namespace std;
void day ( int d )
{
    switch ( d )
    {
        case 1:
            cout << "Monday" << endl;
            break;

        case 2:
            cout << "Tuesday" << endl;
            break;

        case 3:
            cout << "Wednesday" << endl;
            break;

        case 4:
            cout << "Thursday" << endl;
            break;

        case 5:
            cout << "Friday" << endl;
            break;

        case 6:
            cout << "Saturday" << endl;
            break;

        case 7:
            cout << "Sunday" << endl;
            break;

        default:
            cout << "Invalid Input" << endl;
            break;
    }
}

int main()
{
    int num;

    cout << "Enter an integer (1 - 7): ";
    cin >> num;

    day ( num );

    return 0;
}
