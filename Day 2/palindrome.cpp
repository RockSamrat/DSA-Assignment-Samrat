#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    cout << "What is the word? ";
    cin >> word;
    string wordnew = word;
    reverse(word.begin(), word.end());

    if (word == wordnew)
    {
        cout << "It is a palindrome." << endl;
    }
    else 
    {
        cout << "It isnt a plaindrome." << endl;
    }
    return 0;

}