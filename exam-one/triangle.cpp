#include<iostream>

using namespace std;

int main () {
    int a, b, angle;

    cout << "Enter First and Second Angle of Right Triangle : ";
    cin >> a >> b;

    angle = 180 - (a + b);

    cout << "Third Angle is : " << angle;

    return 0;
}