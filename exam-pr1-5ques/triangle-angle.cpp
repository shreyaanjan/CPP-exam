#include<iostream>
using namespace std;

int main(){
    int a, b, angle;

    cout << "Enter First Angle of Triangle : ";
    cin >> a;

    cout << "Enter Second Angle of Triangle : ";
    cin >> b;

    if (a <= 0 || b <= 0 || a + b >= 180){
        cout << "Invalid Angles !" << endl;
        return 0; 
    }

    angle = 180 - (a + b);

    cout << "Third Angle is : " << angle;

    return 0;
}