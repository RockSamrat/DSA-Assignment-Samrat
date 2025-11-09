#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "What is number 1? ";
    cin >> num1;
    cout << "What is number 2? ";
    cin >> num2;
    if (num1 > num2)
    {
        cout << "Number 1 is greater." << endl;
    }
    else if (num1 < num2)
    {
        cout << "Number 2 is greater." << endl;
    }
    else
    {
        cout << "Number 1  equals to Number 2." << endl;
    }
}