#include<iostream>
using namespace std;

void modifyValue ( int *mv )
{
    *mv = *mv * 2;
}

int main()
{
    int var = 10;
    int *p = &var;

    cout << "Value Before Calling the Function" << endl;
    cout << "Value: " << var << endl;
    cout << "Value After Calling the Function" << endl;
    modifyValue ( &var ) ;
    cout << "Value: " << var << endl;

    return 0;
}