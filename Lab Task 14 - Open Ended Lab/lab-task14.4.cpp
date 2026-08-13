#include <iostream>
#include <string>

using namespace std;

struct Book
{
    string title;
    string author;
    float price;
};

int main()
{
    Book b1, b2;

    cout << "Enter details of first book" << endl;

    cout << "Title: ";
    getline ( cin, b1.title );

    cout << "Author: ";
    getline ( cin, b1.author );

    cout << "Price: ";
    cin >> b1.price;

    cin.ignore();

    cout << endl;

    cout << "Enter details of second book" << endl;

    cout << "Title: ";
    getline ( cin, b2.title );

    cout << "Author: ";
    getline ( cin, b2.author );

    cout << "Price: ";
    cin >> b2.price;

    cout << endl;

    if ( b1.price > b2.price )
    {
        cout << "Book with higher price:" << endl;
        cout << "Title: " << b1.title << endl;
        cout << "Author: " << b1.author << endl;
        cout << "Price: " << b1.price << endl;
    }
    else if ( b2.price > b1.price )
    {
        cout << "Book with higher price:" << endl;
        cout << "Title: " << b2.title << endl;
        cout << "Author: " << b2.author << endl;
        cout << "Price: " << b2.price << endl;
    }
    else
    {
        cout << "Both books have the same price." << endl;
    }

    return 0;
}
