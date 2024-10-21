#include<iostream>

using namespace std;

int main(){
    int a, b, c, max;

    cout << "Enter Value for A, B and C : ";
    cin >> a >> b >> c;

    if((a == b) && (b == c) && (a == c)){
        cout << "All are Same" << endl;
        return 0;
    }

    if (max > a) cout << "A is Maximum" <<endl;
    if (max > b) cout << "B is Maximum" <<endl;
    if (max > c) cout << "C is Maximum" <<endl;

    return 0;
}