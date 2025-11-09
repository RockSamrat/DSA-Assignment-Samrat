#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, exponent;
    cout << "What is your number? ";
    cin >> num;
    cout << "What will the power exponent of your number be? ";
    cin >> exponent;

    cout << sqrt(num) << " is the sqaure root." << endl;
    cout << pow(num, exponent) << " is the base raised to the power exponent." << endl;
    cout << fabs(num) << " is the absolute value." << endl;
    return 0;
}

