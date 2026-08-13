#include<iostream>
using namespace std;

void display ( int *A ) 
{
    cout << *A << endl; 
    cout << *( A + 1 ) << endl; 
    *A = 10; 
}

int main () 
{ 
    int arr [ 5 ] = { 1, 2, 3, 4, 5 }; 
    display ( arr ); 
    display ( arr ); 
} 
