#include<iostream>

using namespace std;

int main (){
    float w, h, b;

    cout << "Enter the Value for Weight and Height : ";
    cin >> w >> h;

    b = w /( h * h);

    cout << "Body Mass Index is : " << b;

    return 0;
}