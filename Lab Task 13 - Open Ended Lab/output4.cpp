#include<iostream>
using namespace std;
int main()
{
    int *ptr; 
    int *ptr2;
    int arr [ 5 ]; 
    ptr = &arr [ 1 ]; 
    ptr2 = arr; 
    cout << ptr2 << endl; 
    cout << &arr << endl; 
    cout << ptr << endl; 
    cout << ptr-- << endl; 
    cout << --ptr << endl; 
}