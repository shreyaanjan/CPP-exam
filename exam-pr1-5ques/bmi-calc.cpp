#include<iostream>

using namespace std;

int main (){
    float w, h, bmi;

    cout << "Enter the Value for Weight : ";
    cin >> w;

    cout << "Enter the Value for Height : ";
    cin >> h;

    bmi = w /( h * h);

    cout << "Body Mass Index is : " << bmi << endl;

    return 0;
}