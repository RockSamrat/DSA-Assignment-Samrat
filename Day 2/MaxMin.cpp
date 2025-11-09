#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double num1, num2;
    cout << "What is the first number? ";
    cin >> num1;
    cout << "What is the second number? ";
    cin >> num2;

    cout << fmax(num1 , num2) << " is the maximum." << endl;
    cout << fmin(num1, num2) << " is the minimum." << endl;

    return 0;
}