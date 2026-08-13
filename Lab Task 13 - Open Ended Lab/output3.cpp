#include<iostream>
using namespace std;
int main()
{
    int var = 5; 
    int *pointVar; 
    pointVar = &var; 
    cout << var << endl; 
    cout << &var << endl; 
    cout << pointVar << endl; 
    cout << *pointVar << endl; 
}