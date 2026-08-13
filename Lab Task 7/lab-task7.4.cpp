#include<iostream>
using namespace std;
int positive_numbers ( int arr [ ] )
{
    int p = 0;

    for ( int ind = 0; ind < 10; ind++ )
    {
        if ( arr [ ind ] > 0 )
        {
            p++;
        }
    }

    return p;
}

int negative_numbers ( int arr [ ] )
{
    int n = 0;

    for ( int ind = 0; ind < 10; ind++ )
    {
        if ( arr [ ind ] < 0 )
        {
            n++;
        }
    }

    return n;
}

int odd_numbers ( int arr [ ] )
{
    int o = 0;

    for ( int ind = 0; ind < 10; ind++ )
    {
        if ( arr [ ind ] % 2 != 0 )
        {
            o++;
        }
    }

    return o;
}

int even_numbers ( int arr [ ] )
{
    int e = 0;

    for ( int ind = 0; ind < 10; ind++ )
    {
        if ( arr [ ind ] % 2 == 0 )
        {
            e++;
        }
    }

    return e;
}

int zero_numbers ( int arr [ ] )
{
    int z = 0;

    for ( int ind = 0; ind < 10; ind++ )
    {
        if ( arr [ ind ] == 0 )
        {
            z++;
        }
    }

    return z;
}

int main()
{
    int num [ 10 ];
    cout << "Enter ten integers: " << endl;

    for ( int ind = 0; ind < 10; ind++ )
    {
        cin >> num [ ind ];
    }

    cout << endl;

    cout << "There are " << positive_numbers ( num ) << " positive numbers." << endl;
    cout << "There are " << negative_numbers ( num ) << " negative numbers." << endl;
    cout << "There are " << odd_numbers ( num ) << " odd numbers." << endl;
    cout << "There are " << even_numbers ( num ) << " even numbers." << endl;
    cout << "There are " << zero_numbers ( num ) << " zero numbers." << endl;

    return 0;
}