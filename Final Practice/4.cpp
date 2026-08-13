#include<iostream>
#include<string>
using namespace std;

struct Student
{
    string name;
    int rollNo;
    float marks;
};

int main()
{
    Student s [ 3 ];

    for ( int ind = 0; ind < 3; ind++ )
    {
        cout << "Student " << ind + 1 << endl;
        cout << "Name: ";
        cin >> s [ ind ].name;
        cout << "Roll No: ";
        cin >> s [ ind ].rollNo;
        cout << "Marks: ";
        cin >> s [ ind ].marks;
        cout << endl;

    }

    if ( s [ 0 ].marks > s [ 1 ].marks && s [ 0 ].marks > s [ 2 ].marks )
    {
        cout << "The student with the highest marks is: " << endl;
        cout << "Name: ";
        cout << s [ 0 ].name;
        cout << "Roll No: ";
        cout << s [ 0 ].rollNo;
        cout << "Marks: ";
        cout << s [ 0 ].marks;
        cout << endl;
    }
    else if ( s [ 1 ].marks > s [ 0 ].marks && s [ 1 ].marks > s [ 2 ].marks )
    {
        cout << "The student with the highest marks is: " << endl;
        cout << "Name: ";
        cout << s [ 1 ].name;
        cout << "Roll No: ";
        cout << s [ 1 ].rollNo;
        cout << "Marks: ";
        cout << s [ 1 ].marks;
        cout << endl;
    }
    else
    {
        cout << "The student with the highest marks is: " << endl;
        cout << "Name: ";
        cout << s [ 2 ].name << endl;
        cout << "Roll No: ";
        cout << s [ 2 ].rollNo << endl;
        cout << "Marks: ";
        cout << s [ 2 ].marks << endl;
        cout << endl;
    }
    
    return 0;
}