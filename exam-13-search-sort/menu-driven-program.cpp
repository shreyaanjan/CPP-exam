#include<iostream>
#include<vector>

using namespace std;

class Algorithm{
    public :
        void display(vector<int>);
        void selectionSort(vector<int> &, int);
        void mergeSort(vector<int> &, int, int);
        void merge(vector<int> &, int, int, int);
        void sort(vector<int> &, int);
        int linearSearch(vector<int> &, int, int);
        int binarySearch(vector<int> &, int, int, int);
};

void Algorithm::display(vector<int> arr){
    for(int value : arr){
        cout << value << " ";
    }
    cout << endl;
}

void Algorithm::selectionSort(vector<int> &arr, int size){
    for(int i = 0; i < (size - 1); i++){
        int midIdx = i;
        for(int j = (size + 1); j < size; j++){
         
        }
    }
}

void Algorithm::merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}

void Algorithm::mergeSort(vector<int> &arr, int low, int high){
    if(low >= high) return;

    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int Algorithm::linearSearch(vector<int> &arr, int key, int size){
    int idx = -1;
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            idx = i;
        }
    }
    return idx;
}

void Algorithm::sort(vector<int> &arr, int size){
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

int Algorithm::binarySearch(vector<int> &arr, int key, int start, int end){
    int idx = -1;
    int mid = (start + end) / 2;

    if(key == mid){
        return mid;
    } else if (key > mid){
        return binarySearch(arr, key, mid + 1, end);
    } else {
        return binarySearch(arr, key, start, mid - 1);
    }
    return mid;
}

int main(){
    Algorithm a1;
    int size;

    cout << "Enter Size : ";
    cin >> size;
    vector<int> arr(size);

    for(int i = 0; i < size; i++){
        cout << "Enter Number : ";
        cin >> arr[i];
    }
    cout << "Before : " << endl;
    a1.display(arr);

    int choice;

    cout << "----Sort / Search Algorithm----" << endl;
    cout << "Enter 1 for Selection Sort " << endl;
    cout << "Enter 2 for Merge Sort " << endl;
    cout << "Enter 3 for Linear Search " << endl;
    cout << "Enter 4 for Binary Search " << endl;
    cout << "Enter 0 to Exit " << endl;
    cout << "-------------------------------" << endl;

    cout << "Enter Your Choice : ";
    cin >> choice;

    switch (choice){
    case 1:{
        a1.selectionSort(arr, size);
        break;
    }
    case 2:{
        a1.mergeSort(arr, 0, size - 1);
        cout << "After Merge Sort : ";
        a1.display(arr);
        break;
    }
    case 3:{
        int key;
        cout << "Enter Number you want to Search : ";
        cin >> key;
        
        int idx = a1.linearSearch(arr, key, size);
        if(idx == -1){
            cout << "Oops, Number Not Found !" << endl;
        } else {
            cout << "Yay, Number Found at Index : " << idx << endl;
        }
        break;
    }
    case 4:{
        a1.sort(arr, size);
        a1.display(arr);
        int key;
        cout << "Enter Number you want to Search : ";
        cin >> key;
        
        int idx = a1.binarySearch(arr, key, 0, size - 1);
        if(idx == -1){
            cout << "Oops, Number Not Found !" << endl;
        } else {
            cout << "Yay, Number Found at Index : " << idx << endl;
        }
        break;  
    }
    case 0:{
        cout << "Thankyou !" << endl;
        break;
    }
    default:{
        cout << "Invalid !" << endl;
    }
    }
    return 0;
}