#include<iostream>

using namespace std;

int main (){
    int score;

    cout << "Enter Marks out of 100 : ";
    cin >> score;
    if(score > 100){
        cout << "Error";
        return 0;
    }
    if (score >= 90){
        cout << "A+ Grade";
    }
    else if (score >= 80){
        cout << "A Grade";
    }
    else if (score >= 70){
        cout << "B+ Grade";
    }
    else if (score >= 60){
        cout << "B Grade";
    }
    else if (score >= 50){
        cout << "C Grade";
    }
    else {
        cout << "Fail";
    }

    return 0;
}