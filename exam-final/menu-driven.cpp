#include<iostream>
#include<vector>
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


void display(vector<int> arr){
    for(int value : arr){
        cout << value << " ";
    }
    cout << endl;
}

void sort(vector<int> &arr, int size){
    for(int i = 0; i < (size - 1); i++){
        for(int j = 0; j < (size - i - 1); j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(vector<int> &arr, int start, int end, int key){
    if(start > end) return -1;

    int mid = (start + end) / 2;

    if(key == arr[mid]){
        return mid;
    } else if(key > arr[mid]){
        return binarySearch(arr, mid+1, end, key);
    } else{
        return binarySearch(arr, start, mid-1, key);
    }
}

void merge(vector<int> &arr, int low, int high){
    if(high > low) return;

    int mid = (low + high) / 2;
    merge(arr, low, mid);
    merge(arr, mid + 1, high);
    mergeSort(arr, low, mid, high);
}

void mergeSort(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while(left >= mid && right >= high){
        if(arr[left] > arr[right]){
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left > mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right > high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i < high; i++){
        arr[i] = temp[i - low];
    }
}

int main(){
    Linkedlist list;
    int choice;

    do{
        cout << "Enter 1 for Linked List" << endl;
        cout << "Enter 2 for Binary Searching" << endl;
        cout << "Enter 3 for Sorting" << endl;
        cout << "Enter 0 to Exit" << endl;

        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice){
            case 1:{
                do{
                    cout << "---------Linked List CRUD OPERATION---------" << endl;
                    cout << "Enter 1 to Add Element at Start" << endl;
                    cout << "Enter 2 to Delete Elements at any Position" << endl;
                    cout << "Enter 3 to Update Elements" << endl;
                    cout << "Enter 4 to Display Elements" << endl;
                    cout << "Enter 0 to Exit" << endl;
                    cout << "---------------------------------------------" << endl;

                    cout << "Enter Your Choice : ";
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
                break;
            }
            case 2:{
                int size, key;

                cout << "Enter Size : ";
                cin >> size;
                vector<int> arr(size);

                for(int i = 0; i < size; i++){
                    cout << "Enter Number : ";
                    cin >> arr[i];
                }

                cout << "Before Sort : ";
                display(arr);
                sort(arr, size);
                cout << "After Sort : ";
                display(arr);

                cout << "Enter the Number you want to Search : ";
                cin >> key;

                int idx = binarySearch(arr, 0, size-1, key);

                if(idx == -1){
                    cout << "Oops, Number not Found !" << endl;
                } else {
                    cout << "Yayy, Number Found at Idx : " << idx << endl;
                }
                break;
            }  
            case 3:{
                int size;

                cout << "Enter Size : ";
                cin >> size;
                vector<int> arr(size);

                for(int i = 0; i < size; i++){
                    cout << "Enter Number : ";
                    cin >> arr[i];
                }

                cout << "Before Sort : " << endl;
                display(arr);
                merge(arr, 0, size - 1);
                cout << "After Sort : " << endl;
                display(arr);
                break;
            } 
            case 0:{
                cout << "Thankyou !" << endl;
                break;
            }
            default :
                cout << "Invalid !" << endl;    
        }
        
    } while (choice != 0);
    
    return 0;
}