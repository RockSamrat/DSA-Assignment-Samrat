#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char a;
    cout << "What is the letter? ";
    cin >> a;
    
    cout << "Uppercase: " << (char)toupper(a) << endl;
    cout << "Lowercase: " << (char)tolower(a) << endl;
    return 0;
}