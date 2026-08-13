#include<iostream>
#include<string>
using namespace std;

struct Account
{
    string holderName;
    int accountNo;
    float balance;
};

void input_account ( Account &ia )
{
    cout << "Account Holder's Name: ";
    cin >> ia.holderName;
    cout << "Account Number: ";
    cin >> ia.accountNo;
    cout << "Balance: ";
    cin >> ia.balance;
    cout << endl;
}

void display_account ( Account da )
{
    cout << "The Account details are: " << endl;
    cout << "Account Holder's Name: ";
    cout << da.holderName << endl;
    cout << "Account Number: ";
    cout << da.accountNo << endl;
    cout << "Balance: ";
    cout << da.balance << endl;
    cout << endl;
}

int main()
{
    Account a;

    input_account ( a );
    display_account ( a );

    return 0;
}