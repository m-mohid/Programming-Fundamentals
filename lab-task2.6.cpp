#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    string result = (num % 2 == 0) ? "Even" : "Odd";
    cout << "The number is " << result << endl;

    return 0;
}