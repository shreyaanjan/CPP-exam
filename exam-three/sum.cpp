#include<iostream>

using namespace std;

int main (){
    int sum=0, n, r;

    cout << "Enter Number : ";
    cin >> n;

    while (n != 0){
        r = n % 10;
        sum = sum + r;
        n = n / 10;   
    }

    cout << "Sum : " << sum;

    return 0;
}