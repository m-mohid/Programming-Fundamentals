#include<iostream>
using namespace std;

struct Rectangle
{
    float length;
    float breadth;
};

float calculate_area ( Rectangle r )
{
    float a = r.length * r.breadth;
    return a;
}

float calculate_perimeter ( Rectangle r )
{
    float p = 2 * ( r.length + r.breadth );
    return p;
}

int main()
{
    Rectangle rect;

    cout << "Enter Length: " << endl;
    cin >> rect.length;

    cout << "Enter Breadth: " << endl;
    cin >> rect.breadth;

    float area = calculate_area ( rect );
    float perimeter = calculate_perimeter ( rect );

    cout << "Area of Rectangle: " << area << endl;
    cout << "Perimeter of Rectangle: " << perimeter << endl;

    return 0;
}
