#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    cout << "Whats the word? ";
    cin >> word;

    int freq[26] = {0};

    for(int i = 0; i < word.length(); i++)
    {
        if(isalpha(word[i]))
        {
            char ch = tolower(word[i]);
            freq[ch - 'a']++;
        }
    }

    for(int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            cout << char(i + 'a') << ":" << freq[i] << endl;
        }
    }
}