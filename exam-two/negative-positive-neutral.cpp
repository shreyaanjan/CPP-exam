#include<iostream>

using namespace std;

int main (){
    int a;

    cout << "Enter any Number : ";
    cin >> a;

    if (a == 0){
        cout << "Number is Neutral.";
    }
    else if (a <= 0){
        cout << "Number is Negative.";
    }
    else if (a >= 0){
        cout << "Number is Positive.";
    }
    else {
        cout << "Invalid !";
    }

    return 0;
}