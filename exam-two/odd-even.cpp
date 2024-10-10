#include<iostream>

using namespace std;

int main(){
    int a;

    cout << "Enter any Number : ";
    cin >> a;
    
    a % 2 == 0 ? cout << "It is an Even Number." : cout << "It is an Odd Number." ;

    return 0;
}