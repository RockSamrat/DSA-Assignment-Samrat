#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    cout << "What is the word? ";
    cin >> word;
    
    cout << "Length: " << word.length() << endl;
    return 0;
}