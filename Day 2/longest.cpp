#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() 
{
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string longestWord = "";
    string word;
    stringstream ss(sentence); 

    while (ss >> word) 
    {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }

    cout << "Longest word: " << longestWord << endl;

    return 0;
}
