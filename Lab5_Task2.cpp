// Task 2: Area of a hexagon
#include <iostream>
#include <cmath>
using namespace std;

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main()
{
    double s, area;

    cout << "Print the area of a hexagon:" << endl;
    cout << "---------------------------------" << endl;
    cout << "Input the side of the hexagon: ";
    cin >> s;

    area = (6 * pow(s, 2)) / (4 * tan(M_PI / 6));
    cout << "The area of the hexagon is: " << area << endl;

    return 0;
}
