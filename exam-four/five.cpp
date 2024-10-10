#include<iostream>

using namespace std;

int main (){
    int i, j, s, k;

    for(i=5; i>=1; i--){
        for(s=1; s<i; s++){
            cout << "  ";
        }
        for(j=i; j<=5; j++){
            cout << j << " ";
        }
        for(k=4; k>=i; k--){
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}
