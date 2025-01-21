#include <iostream>
using namespace std;

int main() {
    double a, b, h, area;

    cout << "Enter 1st length : ";
    cin >> a;
    cout << "Enter 2nd length : ";
    cin >> b;
    cout << "Enter Height : ";
    cin >> h;

    area = ((a + b) / 2) * h;

    cout << "Area of the Trapezoid : " << area << endl;

    return 0;
}