#include<iostream>

using namespace std;

int main () {
    int i, n;
    bool flag = true;

    cout << "Enter Number : ";
    cin >> n;

    for(i = 2; i < n; i++){
        if (n % i == 0){
            flag = false;
            cout << "It is not a Prime Number.";
            return 0;
        }
        
    }

    if(flag) cout << "It is a Prime Number.";
    return 0;
}