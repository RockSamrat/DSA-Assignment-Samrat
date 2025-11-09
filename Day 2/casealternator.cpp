#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string word;
    cout << "What is the lower case word? ";
    getline (cin, word);
    
   for (int i = 0; i < word.length(); i++) 
    {
        word[i] = tolower(word[i]); 
    }


    for(int i = 1; i < word.length(); i += 2)
    {
        word[i] = toupper(word[i]);
    }
    cout << word;
    return 0;
}