#include<iostream>
using namespace std;
int max_hours ( int arr [ ] )
{
    int max = arr [ 0 ];
    int max_ind = 0;

    for ( int ind = 1; ind < 10; ind++ )
    {
        if ( arr [ ind ] > max )
        {
            max = arr [ ind ];
            max_ind = ind + 1;
        }
    }

    return max_ind;
}

int main()
{
    int student_hours [ 10 ];
    int most_hours = 0;
    cout << "Enter the number of hours studied by 10 students: " << endl;

    for ( int ind = 0; ind < 10; ind++ )
    {
        cin >> student_hours [ ind ];
    }

    most_hours = max_hours ( student_hours );
    cout << endl;

    for ( int ind = 0; ind < 10; ind++ )
    {
        if ( student_hours [ ind ] > 1 )
        {
            cout << "Student " << ind + 1 << " studied: " << student_hours [ ind ] << " hours." << endl;
        }
        else if ( student_hours [ ind ] == 1 )
        {
            cout << "Student " << ind + 1 << " studied: " << student_hours [ ind ] << " hour." << endl;
        }
        else
        {
            cout << "Student " << ind + 1 << " entered invalid studied hours !" << endl;
        }
    }

    cout << endl;
    cout << "Student " << most_hours << " studied the most." << endl;

    return 0;
}