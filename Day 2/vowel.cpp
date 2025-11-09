#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string word;
    int vowel = 0, cons = 0;
    cout << "What is the word? ";
    cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
        if (isalpha(word[i]))
        {
            char ch = tolower(word[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowel++;
            }
            else
            {
                cons++;
            }
        }
    }
    cout << "Vowels: " << vowel << endl;
    cout << "Consonants: " << cons << endl;
}