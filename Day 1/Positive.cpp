#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "What is the number? " << endl;
    cin >> num;
    if (num > 0)
    {
        cout << "Number is positive.";
    }
    else 
    {
        cout << "Number is not positive.";
    }
}