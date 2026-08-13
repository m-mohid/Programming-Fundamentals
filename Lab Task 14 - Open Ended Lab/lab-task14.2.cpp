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
    Student s [ 5 ];

     for ( int i = 0; i < 5; i++ )
    {
        cout << "Enter details of student " << i + 1 << endl;

        cout << "Name: ";
        cin >> s [ i ].name;

        cout << "Roll Number: ";
        cin >> s [ i ].rollNo;

        cout << "Marks: ";
        cin >> s [ i ].marks;

        cout << endl;
    }

    cout << "Student Details" << endl;
    cout << "----------------" << endl;

    for ( int i = 0; i < 5; i++ )
    {
        cout << "Student " << i + 1 << endl;
        cout << "Name: " << s [ i ].name << endl;
        cout << "Roll Number: " << s [ i ].rollNo << endl;
        cout << "Marks: " << s [ i ].marks << endl;
        cout << endl;
    }

    return 0;
}