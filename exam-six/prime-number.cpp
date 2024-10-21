#include<iostream>

using namespace std;

int main(){
    int num;
    bool flag = true;

    cout << "Enter Number : ";
    cin >> num;

    for(int i = 2; i < num; i++){
        flag = true;
        if(num % i == 0){
            flag = false;
            break;
        }
    }

    if(flag) cout << "Its a Prime Number";
    else cout << "Its not a Prime Number";

    return 0;
}