#include<iostream>

using namespace std;

int main (){
    int i, j, s, k;

    for(i=1; i<=5; i++){
        
        for(j=1; j<=i; j++){
            cout << j << " ";
        }
        for(s=4; s>=i; s--){
            cout << "    ";
        }
        for(k=i; k>=1; k--){
            cout << k << " ";
        }

        cout << endl;
    }

    return 0;
}

