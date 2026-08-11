#include<iostream>
using namespace std;
int main()
{
    int num;
    float decimal;
    char letter;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "Enter a float: ";
    cin >> decimal;

    cout << "Enter a character: ";
    cin >> letter;

    cout << "You entered integer: " << num << endl;
    cout << "You entered float: " << decimal << endl;
    cout << "You entered character: " << letter << endl;

    return 0;
}