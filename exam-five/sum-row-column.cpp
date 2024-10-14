#include <iostream>

using namespace std;

int main(){
    int rowSize, colSize, sum=0, rowNum, colNum;

    cout << "Enter Row Size : ";
    cin >> rowSize;

    cout << "Enter Column Size : ";
    cin >> colSize;

    int a[rowSize][colSize];

    for(int i = 0; i < rowSize; i++){
        for (int j = 0; j < colSize; j++){
            cout << "Enter Value : ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    for(int i = 0; i < rowSize; i++){
        for (int j = 0; j < colSize; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // ROW
    cout << "Enter Row Index : ";
    cin >> rowNum;

    for(int k = 0; k < colSize; k++){
        sum = sum + a[rowNum][k];
    }
    cout << "Sum of Row : " << sum << endl;

    sum=0;
    // COLUMN
    cout << "Enter Column Index : ";
    cin >> colNum;
    
    for(int k = 0; k < colSize; k++){
        sum = sum + a[k][colNum];
    }
    cout << "Sum of Column : " << sum;
    return 0;
}