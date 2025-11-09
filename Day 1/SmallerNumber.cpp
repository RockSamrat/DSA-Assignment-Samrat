#include <iostream> 

using namespace std;

int main()
{
    int num1, num2;
    cout << "What is first number? ";
    cin >> num1;
    cout << "What is Second number? ";
    cin >> num2;

    cout << (num1 > num2 ? "Second number is smaller" :"First number is smaller");
}