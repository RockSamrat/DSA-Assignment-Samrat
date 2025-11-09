#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence); 

    int wordCount = 0;
    bool inWord = false; 

    for (int i = 0; i < sentence.length(); i++) 
    {
        if (!isspace(sentence[i])) 
        { 
            if (!inWord) 
            {          
                wordCount++;
                inWord = true;
            }
        } 
        else 
        {
            inWord = false;          
        }
    }

    cout << "Number of words: " << wordCount << endl;

    return 0;
}
