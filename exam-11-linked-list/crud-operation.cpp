#include<iostream>
using namespace std;

class Node{
    public :
        int data;
        Node *next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class Linkedlist{
    public :
        Node *head;
        int count;
    
    Linkedlist(){
        this->head = nullptr;
        this->count = 0;
    }

    void addAtStart(int data){
        Node *newNode = new Node(data);

        newNode->next = this->head;
        this->head = newNode;
        cout << "Data Added Successfully" << endl;
        this->count++;
    }

    void viewData(){
        if(count == 0 || head == nullptr){
            cout << "Linked List is Empty" << endl;
            return;
        }
        Node *ptr = this->head;
        while(ptr != nullptr){
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
    void deleteByPosition(int pos){
        if(count == 0 || head == nullptr){
            cout << "Linked List is Empty" << endl;
            return;
        }
        
        if(pos == 0){
            Node *temp = this->head;     
            this->head = head->next;
            
            delete temp;
            temp = nullptr;
            return;
        }
        
        Node *prev = this->head, *curr = this->head;
        for(int i = 0; i < pos; i++){
            curr = curr->next;
        }
        for(int i = 0; i < pos-1; i++){
            prev = prev->next;
        }
        prev->next = curr->next;
        delete curr;
        curr = nullptr;

        prev = nullptr;
        delete prev;
        cout << "Data Deleted Successfully" << endl;
        this->count--;
    }
    bool searchByPosition(int pos){

    }
    
    void updateByPosition(int pos, int data){
        Node *temp = this->head;

        for(int i = 0; i < pos; i++){
            temp = temp->next;
        }
        temp->data = data;
        cout << "Data Updated Successfully" <<endl;
    }

};
int main(){
    Linkedlist list;
    int choice;

    do{
        cout << "-------CRUD OPERATION-------" << endl;
        cout << "Enter 1 to Insert Data at Beginning : " << endl;
        cout << "Enter 2 to View Data : " << endl;
        cout << "Enter 3 to Delete Data by Position : " << endl;
        cout << "Enter 4 to Search Data : " << endl;
        cout << "Enter 5 to Update Data : " << endl;
        cout << "Enter 0 to Exit : " << endl;
        cout << "----------------------------" <<endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice){
        case 1:{
            int data;

            cout << "Enter Data to Insert : ";
            cin >> data;

            list.addAtStart(data);
            break;
        }
        case 2:{
            list.viewData();
            break;
        }
        case 3:{
            int pos;

            cout << "Enter Position at which you want to Delete Data : ";
            cin >> pos;

            list.deleteByPosition(pos);
            break;
        }
        case 4:{
            int pos;

            cout << "Enter Position at which you want to Search Data : ";
            cin >> pos;

            list.searchByPosition(pos);
            break;
        }
        case 5:{
            int data, pos;

            cout << "Enter Position at which you want to update Data : ";
            cin >> pos;

            cout << "Enter Data : ";
            cin >> data;

            list.updateByPosition(pos, data);
            break;
        }
        case 0:{
            cout << "Thankyou !" << endl;
            break;
        }
        default:
            cout << "Invalid !" << endl;
            break;
        }
    } while (choice != 0);
    
    return 0;
}