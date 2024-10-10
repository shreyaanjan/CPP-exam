#include<iostream>

using namespace std;

int main (){
    int i, j, s;

    for(i=5; i>=1; i--){
        for(s=i; s<5; s++){
            cout << "  ";
        }
        for(j=1; j<=i; j++){
            cout << j%2 << " ";
        }
        cout << endl;
    }

    return 0;
}

// 1 0 1 0 1
// 1 0 1 0 
// 1 0 1
// 1 0 
// 1 


// 5-> 0
// 4-> 1
// 3-> 2