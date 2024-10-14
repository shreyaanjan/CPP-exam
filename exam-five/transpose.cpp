#include<iostream>

using namespace std;

int main(){
    int row, col;

    cout << "Enter Row Size : ";
    cin >> row;

    cout << "Enter Column Size : ";
    cin >> col;

    int a[row][col];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << "Enter the Value : ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}