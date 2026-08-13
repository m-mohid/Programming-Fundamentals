#include<iostream>
using namespace std;
void is_vowel ( char vc )
{
    cout << vc << " is a vowel" << endl;
}
void is_consonant ( char vc )
{
    cout << vc << " is a consonant" << endl;
}

int main()
{
    char v_c;

    cout << "Enter any alphabet character: ";
    cin >> v_c;

    if ( ( v_c >= 'a' && v_c <= 'z' ) || ( v_c >= 'A' && v_c <= 'Z' ) )
    {
        switch ( v_c )
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            is_vowel ( v_c );
            break;

            default:
            is_consonant ( v_c );
            break;

        }
    }
    else
    {
        cout << "Invalid Input" << endl;
    }

    return 0;
}
