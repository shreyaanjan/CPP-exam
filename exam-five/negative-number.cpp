#include<iostream>

using namespace std;

int main(){
    int size;

    cout << "Enter the Size of Array : ";
    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++){
        cout << "Enter Value : ";
        cin >> arr[i];
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << " " << endl;
    }

    for(int i = 0; i < size; i++){
        if(arr[i] < 0){
            cout << "Negative Numbers : "<< arr[i] << " ";
        }
    }

    return 0;
}