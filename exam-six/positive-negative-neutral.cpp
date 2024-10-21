#include<iostream>

using namespace std;

int main(){
    int num;

    cout << "Enter Number : ";
    cin >> num;

    if(num == 0){
        cout << "Its a Neutral Number !";
    }else if(num > 0){
        cout << "Its a Positive Number !";
    }else{
        cout << "Its a Negative Number !";
    }

    return 0;
}