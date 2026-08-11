#include<iostream>
using namespace std;
int main()
{
    int number = 10;

    number += 5;  
    number -= 2;  
    number *= 3;
    number /= 4;
    number %= 2;

    cout << "Final value of number : " << number << endl;

    return 0;
}