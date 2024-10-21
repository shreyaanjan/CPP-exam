#include<iostream>

using namespace std;

int main(){
    int num, r=0, ans=0, temp;

    cout << "Enter Number : ";
    cin >> num;
    temp = num;

    while(num != 0){
        r = num % 10;
        ans = (ans * 10) + r;
        num = num / 10;
    }

    if(temp == ans){
        cout << "Its a Palindrome Number !";
    } else{
        cout << "Its not a Palindrome Number !";
    } 
    
    return 0;
}