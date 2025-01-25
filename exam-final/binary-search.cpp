#include<iostream>
#include<vector>

using namespace std;

void display(vector<int>);
void sort(vector<int> &, int);
int binarySearch(vector<int> &, int, int, int);

int main(){
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

    return 0;
}

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