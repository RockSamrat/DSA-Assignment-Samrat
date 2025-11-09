#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "What is your number? ";
    cin >> num;
    if (num > 0)
    {
        if (num % 2 == 0)
        {
            cout << "Number is Positive and Even." << endl;
        }
        else
        {
            cout << "Number is Positive and Odd." << endl;
        }
    }
    else if (num < 0)
    {
        cout << "Number is negative." << endl;
    }
    else
    {
        cout << "Number is 0." << endl;
    }
}