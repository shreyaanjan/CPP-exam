#include<iostream>

using namespace std;

int main(){
    float cel, farhen;

    cout << "Enter Temperature in Celsius : ";
    cin >> cel;

    farhen = (9.0 / 5.0) * cel + 32;

    cout << "Temperature in Fahrenheit is : " << farhen<< endl;

    return 0;
}