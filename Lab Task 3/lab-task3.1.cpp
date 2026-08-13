#include<iostream>
using namespace std;
int main()
{
    float num1, num2, result;
    char op;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter an operator (+,-,*,/): ";
    cin >> op;

    if (op =='+')
    {
        result = num1 + num2;
        cout << num1 << " " << op << " " << num2 << " = " << result << endl;
    }
    else if (op == '-')
    {
        result = num1 - num2;
        cout << num1 << " " << op << " " << num2 << " = " << result << endl;
    }
    else if (op == '*')
    {
        result = num1 * num2;
        cout << num1 << " " << op << " " << num2 << " = " << result << endl;
    }
    else if (op == '/')
    {
        if (num2 != 0)
        {
            result = num1 / num2;
            cout << num1 << " " << op << " " << num2 << " = " << result << endl;
        }
        else
        {
            cout << "Division by zero is not allowed" << endl;
        }
    }
    else
    {
        cout << "Invalid Operator" << endl;
    }
    
    return 0;
}