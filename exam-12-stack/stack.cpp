#include<iostream>
using namespace std;

class Stack{
    private:
        int *arr;
        int capacity;
        int top;
        int count;
    public :
        Stack(int size){
            this->arr = new int[size];
            this->capacity = size;
            this->top = -1;
            this->count = 0;
        }
        ~Stack(){
            delete[] arr;
            arr = nullptr;
        }

        void pushData(int);
        void popData();
        void peekData();
        void viewData();
        bool isEmpty();
        bool isFull();
        void getsize();
};

void Stack::pushData(int data){
    if(this->top == this->capacity - 1){
        cout << "Stack is Overflown !" << endl;
        return;
    }
    this->top++;
    this->arr[top] = data;
    this->count++;
    cout << "Data is Pushed into Stack." << endl;
}

void Stack::popData(){
    if(this->top == -1){
        cout << "Stack is Underflown !" << endl;
        return;
    }
    this->top--;
    this->count--;
    cout << "Data is Poped from Stack." << endl;
}

void Stack::peekData(){
   if(this->top == -1){
        cout << "Stack is Underflown !" << endl;
        return;
    } 
    cout << "Data Peeked is : " << this->arr[top] << endl;
}

void Stack::viewData(){
    if(this->top == -1){
        cout << "Stack is Underflown !" << endl;
        return;
    }
    for(int i = this->top; i >= 0; i--){
        cout << arr[i] << " ";
    }
    cout << endl; 
}

bool Stack::isEmpty(){
    if(this->top == -1){
        return true;
    } else {
        return false;
    }
}

bool Stack::isFull(){
    if(this->top == this->capacity - 1){
        return true;
    } else {
        return false;
    }
}

void Stack::getsize(){
    cout << "Size of Stack is : " << this->count << endl;
}
int main(){
    Stack stack(4);
    int choice;

    do{
        cout << "----------STACK CRUD OPERATION----------" << endl;
        cout << "Enter 1 to Push Data" << endl;
        cout << "Enter 2 to Pop Data" << endl;
        cout << "Enter 3 to Peek Data" << endl;
        cout << "Enter 4 to View Data" << endl;
        cout << "Enter 5 to check if Stack is Empty or Not" << endl;
        cout << "Enter 6 to check if Stack is Full or Not" << endl;
        cout << "Enter 7 to get Size of Stack" << endl;
        cout << "Enter 0 to Exit" << endl;
        cout << "------------------------------------------" << endl;
        
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice){
        case 1:{
            int data;

            cout << "Enter Data : ";
            cin >> data;

            stack.pushData(data);
            break;
        }
        case 2:{
            stack.popData();
            break;
        }
        case 3:{
            stack.peekData();
            break;
        }
        case 4:{
            stack.viewData();
            break;
        }
        case 5:{
            if(stack.isEmpty()){
                cout << "Yes, Stack is Empty !" << endl;
            } else {
                cout << "No, Stack is Not Empty !" << endl;
            }
            break;
        }
        case 6:{
            if(stack.isFull()){
                cout << "Yes, Stack is Full !" << endl;
            } else {
                cout << "No, Stack is Not Full !" << endl;
            }
            break;
        }
        case 7:{
            stack.getsize();
            break;
        }
        case 0:{
            cout << "Thankyou !" <<endl;
            break;
        }
        default:
        cout << "Invalid !" << endl;
            break;
        }
    } while (choice != 0);
    
    return 0;
}