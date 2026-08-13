#include<iostream>
using namespace std;

struct Book
{
    string title;
    string author;
    float price;
};

void display_book ( Book f )
{
    cout << "The book details are: " << endl;
    cout << "Book Title: ";
    cout << f.title << endl;
    cout << "Book Author: ";
    cout << f.author << endl;
    cout << "Book Price: ";
    cout << f.price << endl;
    cout << endl;
}

int main()
{
    Book b;

    cout << "Book Title: ";
    cin >> b.title;
    cout << "Book Author: ";
    cin >> b.author;
    cout << "Book Price: ";
    cin >> b.price;
    cout << endl;

    display_book ( b );
}