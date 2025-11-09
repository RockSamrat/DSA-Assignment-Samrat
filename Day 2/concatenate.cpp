#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word1, word2;
    cout << "What is the first word? ";
    cin >> word1;
    cout << "What is the second word? ";
    cin >> word2;

    cout << word1 + " " + word2 << endl;
}