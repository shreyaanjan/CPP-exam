#include<iostream>
using namespace std;

int main(){
    int score;
    char grade;

    cout << "Enter Your Score : ";
    cin >> score;

    if(score > 100){
        cout << "Invalid Score ! Enter your Score Again !" << endl;
        return 0;
    }
    grade = (score >= 90) ? 'A': 
            (score >= 80) ? 'B':
            (score >= 70) ? 'C':
            (score >= 60) ? 'D': 'F';

    
    cout << "Your Grade is : " << grade << endl;
    switch (grade){
    case 'A':{
        cout << "Excellent Work" << endl;
        break;
    }
    case 'B':{
        cout << "Well Done" << endl;
        break; 
    }
    case 'C':{
        cout << "Good Job" << endl;
        break;
    }
    case 'D':{
        cout << "You passed, but you could do better." << endl;
        break;
    }
    case 'F':{
        cout << "Sorry, you Failed." << endl;
        break;
    }
    default:
        cout << "Invalid Data !" << endl;
        break;
    }

    if(grade == 'A'|| grade == 'B'|| grade == 'C'|| grade == 'D'){
        cout << "Congratulations! You are eligible for the next level." << endl;
    } else {
        cout << "Please try again next time." << endl;
    }

    return 0;
}