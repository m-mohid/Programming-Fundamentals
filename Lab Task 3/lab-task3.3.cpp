#include<iostream>
using namespace std;
int main()
{
    int age;

    cout << "Please enter your age: ";
    cin >> age;

    if (age == 0)
    {
        cout << "Please enter correct age." << endl;
    }
    else if (age >= 18 )
    {
        cout << "You are " << age << " years old and are eligible to vote." << endl;
    }
    else
    {
        cout << "You are " << age << " years old and are not eligible to vote." << endl;
    }

    return 0;
}