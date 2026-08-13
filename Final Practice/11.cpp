#include<iostream>
using namespace std;

struct Student
{
    string name;
    int rollNo;
    float marks;
};

void display ( int *d )
{


}

int main()
{
    Student s;
    Student *p = &s;

    cout << "Student Name: ";
    cin >> p->name;
    cout << "Student Roll No: ";
    cin >> p->rollNo;
    cout << "Student Marks: ";
    cin >> p->marks;
    cout << endl;

    ; 


}