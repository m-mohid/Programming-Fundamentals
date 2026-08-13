#include<iostream>
using namespace std;
int main()
{
    for ( int row = 1; row <= 5; row++)
    {
        cout << "Row : " << row << endl;
        cout << "Seats : ";
        for (int seat = 1; seat <= 10; seat++)
        {
            cout << "| " << seat << " | ";
        }
        cout << endl;
    }

    return 0;
}