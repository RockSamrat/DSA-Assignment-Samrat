#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, y1, x2, y2;
    cout << "What are x1, y1, x2, y2? ";
    cin >> x1 >> y1 >> x2 >> y2;

    double Distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    cout << "Distance Between Points: " << Distance << endl;
    return 0;
}