#include<iostream>
using namespace std;

void swap ( int *ptr1, int *ptr2 )
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int var1 = 10;
    int var2 = 20;

    cout << "---Before Swapping---" << endl;
    cout << "Value 1: " << var1 << endl;
    cout << "Value 2: " << var2 << endl;

    swap ( &var1, &var2 );

    cout << "---After Swapping---" << endl;
    cout << "Value 1: " << var1 << endl;
    cout << "Value 2: " << var2 << endl;

    return 0;
}