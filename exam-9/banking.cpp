#include<iostream>
using namespace std;

class BankAccount{
    protected :
        int accountNumber;
        string accountHolderName;
        int balance = 0;
        int depositAmo;
        int withdrawAmo;
    public :
        void createAccount(string name, int accountNum, int bal){
            this->accountHolderName = name;
            this->accountNumber = accountNum;
            this->balance = bal;
        }
        void displayAccountInfo(){
            cout << "Account Holder Name : " << this->accountHolderName << endl;
            cout << "Account Number : " << this->accountNumber << endl;
            cout << "Balance : " << this->balance << endl;
        }
        void deposit(int depositAmo){
            this->depositAmo = depositAmo;
            this->balance = this->balance + depositAmo; 
        }
        void withdraw(int withdrawAmo){
            this->withdrawAmo = withdrawAmo;
            this->balance = this->balance - withdrawAmo;
        }
};

class SavingsAccount : public BankAccount{
    private :
        int interestRate;
        string password;
        int year;
        int rate;
        int interest;
    public :
        void setPassword(string password){
            this->password = password;
        }
        void validatePassword(){
            cout << "Enter Your Password : " << password << endl;
        }
        void calculateInterest(int year, int rate, int interest){
            this->rate = rate;
            this->year = year;
            interest = (this->balance * rate * year)/100;
        }
        void showInterest(){
            cout << "Interest Amount is : " << this->interest << endl;
        }
};

int main(){
    SavingsAccount account;
    // int counter = 0;
    int choice;

    do{
        cout << "------Banking Management------" << endl;
        cout << "Click 1 - To Create Your Account" << endl;
        cout << "Click 2 - To Deposite Money" << endl;
        cout << "Click 3 - To Withdraw Money" << endl;
        cout << "Click 4 - To View Account Details" << endl;
        cout << "Click 5 - To Calculate Interest" << endl;
        cout << "Click 6 - To Exit" << endl;
        
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice){
        case 1:{
            string name;
            int accNum, bal;

            cin.ignore();
            cout << "Enter Name : ";
            getline(cin, name);

            cout << "Enter Account Number : ";
            cin >> accNum;

            cout << "Enter Balance : ";
            cin >> bal;

            account.createAccount(name, accNum, bal);
            break;
        }
        case 2:{
            int bal, depositAmo;

            cout << "Enter the Amount you want to Deposit : ";
            cin >> depositAmo;
            account.deposit(depositAmo);

            break;
        }
        case 3:{
            int bal, withdrawAmo;

            cout << "Enter the Amount you want to Withdraw : ";
            cin >> withdrawAmo;
            account.withdraw(withdrawAmo);

            break;
        }
        case 4:{
            account.displayAccountInfo();
            break;
        }
        case 5:{
            int year, rate, interest;

            cout << "Enter Rate of Interest : ";
            cin >> rate;

            cout << "Enter Time Period/Year : ";
            cin >> year;

            account.calculateInterest(year, rate, interest);
            account.showInterest();
            
            break;
        }
        case 6:{
            cout << "Thankyou !";
            break;
        }
        }
    } while (choice != 6);
    
    return 0;
}