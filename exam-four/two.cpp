#include<iostream>

using namespace std;

int main (){
    int i, j, k=11;

    for(i=11; i<=14; i++){
        for(j=i; j>=11; j--){
            cout << k++ << " ";
        }
        cout << endl;
    }


    return 0;
}