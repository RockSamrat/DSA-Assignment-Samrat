#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string word;
    cout << "What is the string? ";
    cin >> word;
    reverse(word.begin(), word.end());
    
    cout << "Reverse: " << word << endl;
}