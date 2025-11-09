#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string compressed = "";
    int n = str.length();
    int count = 1;

    for (int i = 0; i < n; i++)
     {
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        compressed += str[i] + to_string(count);
        count = 1;
    }

    cout << compressed << endl;

    return 0;
}
