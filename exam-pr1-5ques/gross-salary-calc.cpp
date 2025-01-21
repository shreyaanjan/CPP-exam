#include<iostream>
using namespace std;

int main(){
    int baseSalary, hraPercent, daPercent, taPercent;
    int hra, da, ta;

    cout << "Enter Base Salary : ";
    cin >> baseSalary;
    cout << "Enter HRA Percentage : ";
    cin >> hraPercent;
    cout << "Enter DA Percentage : ";
    cin >> daPercent;
    cout << "Enter TA Percentage : ";
    cin >> taPercent;

    hra = (hraPercent / 100.0) * baseSalary;
    da = (daPercent / 100.0) * baseSalary;
    ta = (taPercent / 100.0) * baseSalary;

    int grossSalary = baseSalary + hra + da + ta;

    cout << "Gross Salary is : " << grossSalary << endl;

    return 0;
}