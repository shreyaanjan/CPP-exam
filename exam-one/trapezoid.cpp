#include<iostream>

using namespace std;

int main (){
    int a, b, h, area;

    cout << "Enter the value for a, b, h: ";
    cin >> a >> b >> h;

    area = (a + b / 2 * h);

    cout << "Area of Trapezoid is : " << area;

    return 0;
}