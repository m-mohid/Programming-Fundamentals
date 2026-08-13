#include<iostream>
#include<string>
using namespace std;

struct Car
{
    string brand;
    int year;
    float price;
};

int main()
{
    Car c1;
    
    c1.brand = "Toyota";
    c1.year  = 2022;
    c1.price = 4500000.50;

    cout << "Car Brand: " << c1.brand << endl;
    cout << "Manufacturing Year: " << c1.year << endl;
    cout << "Car Price: " << c1.price << endl;

    return 0;
}