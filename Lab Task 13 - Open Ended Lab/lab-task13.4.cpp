#include<iostream>
using namespace std;
int main()
{
    float var = 3.9;
    float *p = &var;

    cout << "Original Value: " << var << endl;

    *p = 4.9;

    cout << "Updated Value: " << *p << endl;

    return 0;
}