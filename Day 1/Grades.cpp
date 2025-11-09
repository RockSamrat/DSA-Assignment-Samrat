#include <iostream>

using namespace std;

int main()
{
    int grade;
    cout << "What is your marks? ";
    cin >> grade;
    
    if (grade >= 100)
    {
        cout << "Enter valid marks!" << endl;
    }
    else if (grade >= 80)
    {
        cout << "Got grade A." << endl;
    }
    else if (grade >= 60)
    {
        cout << "Got Grade B." << endl;
    }
    else if (grade >= 40)
    {
        cout << "Got Grade C." << endl;
    }
    else if (grade <= 40 && grade >= 0)
    {
        cout << "Got Grade F." << endl;
    }
    else
    {
        cout << "Enter valid marks!" << endl;
    }
}