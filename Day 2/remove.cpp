#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);  

    string result = "";

    for (int i = 0; i < str.length(); i++) 
    {
        if (isalpha(str[i])) 
        {  
            result += str[i];
        }
    }

    cout << result << endl;

    return 0;
}
