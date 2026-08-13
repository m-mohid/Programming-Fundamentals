#include<iostream>
using namespace std;

struct Employee
{
    string name;
    int empID;
    float salary;
};

int main()
{
    Employee e [ 3 ];

    for ( int ind = 0; ind < 3; ind++ )
    {
        cout << "Employee " << ind + 1 << ": " << endl;

        cout << "Employee Name: ";
        cin >> e [ ind ].name;
        cout << "Employee ID: ";
        cin >> e [ ind ].empID;
        cout << "Employee Salary: ";
        cin >> e [ ind ].salary;
        cout << endl;
    }

    cout << "Employees with salary less than 50,000 are:" << endl;

    for ( int ind = 0; ind < 3; ind++ )
    {
        if ( e [ ind ].salary < 50000 )
        {
            cout << "Employee Name: ";
            cout << e [ ind ].name << endl;
            cout << "Employee ID: ";
            cout << e [ ind ].empID << endl;
            cout << endl;
        }
    }

    return 0;
}