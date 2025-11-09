#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char a;
    cout << "What is the character? ";
    cin >> a;

    if(isalpha(a))
    {
        cout << a << " is an alphabet.";
    }
    else if (isdigit(a))
    {
        cout << a << " is a digit.";
    }
    else if (ispunct(a))
    {
        cout << a << " is a special character.";
    }
}