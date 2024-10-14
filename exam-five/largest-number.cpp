#include<iostream>

using namespace std;

int main(){
    int size;

    cout << "Enter Size of an Array : ";
    cin >> size;

    int a[size];

    for(int i = 0; i < size; i++){
        cout << "Enter Value : ";
        cin >> a[i];
    }

    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }

    for(int i = 0; i < size; i++){
        
    }


    return 0;
}