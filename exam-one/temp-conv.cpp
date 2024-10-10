#include<iostream>

using namespace std;

int main(){
    float cel, farhen;

    cout << "Enter the Value for Celsius : ";
    cin >> cel;

    farhen = (9 / 5 * cel) + 32;

    cout << "The Value of Fahrenheit is : " << farhen ;

    return 0;
}