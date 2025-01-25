#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};
class Linkedlist{
    public:
        Node *head;
        int count;
    Linkedlist(){
        this->head = nullptr;
        this->count = 0;
    }

    void addAtStart(int data){
        Node *newNode = new Node (data);

        newNode->next = this->head;
        this->head = newNode;
        this->count++;
        cout << "Element Added Successfully !" << endl;
    }

    void deleteAtStart(){
        if(this->count == 0 || this->head == nullptr){
            cout << "Linked List is Empty !" << endl;
            return;
        }
        Node *temp = this->head;


    }

    void deleteAtAny(int pos){
        if(this->count == 0 || this->head == nullptr){
            cout << "Linked List is Empty !" << endl;
            return;
        }
        
        Node *prev = this->head , *curr = this->head;
        for(int i = 0; i < pos; i++){
            curr = curr->next;
        }
        for(int i = 0; i < (pos - 1); i++){
            prev = prev->next;
        }
        prev->next = curr->next;

        delete curr;
        curr = nullptr;

        prev = nullptr;
        delete prev;

        this->count--;
        cout << "Element Deleted Successfully !" << endl;
    }

    void updateAtAny(int data, int pos){
        if(this->count == 0 || this->head == nullptr){
            cout << "Linked List is Empty !" << endl;
            return;
        }

        Node *temp = this->head;
        
        for(int i = 0; i < pos; i++){
            temp = temp->next;
        }
        temp->data = data;
        cout << "Element Updated Successfully at Position : " << pos << endl;
    }

    void display(){
        if(this->count == 0 || this->head == nullptr){
            cout << "Linked List is Empty !" << endl;
            return;
        }
        Node *ptr = head;

        while(ptr != nullptr){
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
    
};
int main(){
    Linkedlist list;
    int choice;

    do{
        cout << "---------Linked List CRUD OPERATION---------" << endl;
        cout << "Enter 1 to Add Element at Start" << endl;
        cout << "Enter 2 to Delete Elements at any Position" << endl;
        cout << "Enter 3 to Update Elements" << endl;
        cout << "Enter 4 to Display Elements" << endl;
        cout << "Enter 0 to Exit" << endl;
        cout << "---------------------------------------------" << endl;

        cout << "Enter Choice : ";
        cin >> choice;

        switch (choice){
        case 1:{
            int data;

            cout << "Enter Element : ";
            cin >> data;

            list.addAtStart(data);
            break;
        }
        case 2:{
            int pos;

            cout << "Enter Position at which you want to Delete Element : ";
            cin >> pos;

            list.deleteAtAny(pos);
            break;
        }
        case 3:{
            int pos, data;

            cout << "Enter Position at which you want to Update Data : ";
            cin >> pos;

            cout << "Enter Element : ";
            cin >> data;

            list.updateAtAny(pos, data);
            break;
        }
        case 4:{
            list.display();
            break;
        }
        case 0:{
            cout << "Thanks !" << endl;
            break;
        }
        default:
            cout << "Invalid !" << endl;
            break;
        }
    } while (choice != 0);
    
    return 0;
}