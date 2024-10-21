#include<iostream>

using namespace std;


void add(int, int, int);
void sub(int, int, int);
void mul(int, int, int);
void div(int, int, int);
void mod(int, int, int);

int main(){
    int choice, num1, num2, ans=0;

    cout << "Press 1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Divison, 5 for Modulo and 6 for Exit : ";

    do{
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice){
        case 1:
            cout << "Enter First Number : ";
            cin >> num1;

            cout << "Enter Second Number : ";
            cin >> num2;
            add(num1, num2, ans);
            break;

        case 2 :
            cout << "Enter First Number : ";
            cin >> num1;

            cout << "Enter Second Number : ";
            cin >> num2;

            sub(num1, num2, ans);
            break;

        case 3 :
            cout << "Enter First Number : ";
            cin >> num1;

            cout << "Enter Second Number : ";
            cin >> num2;

            mul(num1, num2, ans); 
            break;

        case 4 :
            cout << "Enter First Number : ";
            cin >> num1;

            cout << "Enter Second Number : ";
            cin >> num2;

            div(num1, num2, ans); 
            break; 

        case 5 :
            cout << "Enter First Number : ";
            cin >> num1;

            cout << "Enter Second Number : ";
            cin >> num2;

            mod(num1, num2, ans); 
            break;  

        case 6 :
            cout << "Thankyou !" << endl;               
            break;
        }
    } while (choice != 6);
    return 0;
}

void add(int a, int b, int ans){
    ans = a + b;
    cout << "Addition of " << a << " and " << b << " is " << ans << endl;
}

void sub(int a, int b, int ans){
    ans=0;
    ans = a - b;
    cout << "Subtraction of " << a << " and " << b << " is " << ans << endl;
}

void mul(int a, int b, int ans){
    ans=0;
    ans = a * b;
    cout << "Multiplication of " << a << " and " << b << " is " << ans << endl;
}

void div(int a, int b, int ans){
    ans=0;
    ans = a / b;
    cout << "Divison of " << a << " and " << b << " is " << ans << endl;
}

void mod(int a, int b, int ans){
    ans=0;
    ans = a % b;
    cout << "Modulo of " << a << " and " << b << " is " << ans << endl;
}

