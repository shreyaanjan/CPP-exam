#include<iostream>

using namespace std;

int main (){
    int num;

    cout << "Enter any Number from 1 to 7 : ";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Its Monday!";
        break;
    case 2:
        cout << "Its Tuesday!";
        break;
    case 3:
        cout << "Its Wednesday!";
        break;    
    case 4:
        cout << "Its Thrusday!";
        break;
    case 5:
        cout << "Its Friday!";
        break;
    case 6:
        cout << "Its Saturday!";
        break;
    case 7:
        cout << "Its Sunday!";
        break;
    default:
        cout << "Invalid!";
        break;
    }

    return 0;
}