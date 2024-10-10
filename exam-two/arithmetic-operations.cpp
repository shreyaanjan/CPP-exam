#include<iostream>

using namespace std;

int main (){
    int n1, n2, choice, ans;
    
    cout << "Enter Values for N1 and N2: ";
    cin >> n1 >> n2;

    cout << "Choose from 1 to 4 for Arithmetic Operations : ";
    cin >> choice;

    if (choice == 1) {
        ans = n1 + n2;
        cout << "Answer for Addition : " << ans;
    }
    else if (choice == 2) {
        ans = n1 - n2;
        cout << "Answer for Subtraction : " << ans;
    }
    else if (choice == 3) {
        ans = n1 * n2;
        cout << "Answer for Multiplication : " << ans;
    }
    else if (choice == 4) {
        ans = n1 / n2;
        cout << "Answer for Division : " << ans;
    }
    else {
        cout << "Invalid !!";
    }
    return 0;
}