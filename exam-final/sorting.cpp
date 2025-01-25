#include<iostream>
#include<vector>

using namespace std;

void display(vector<int>);
void merge(vector<int> &, int, int);
void mergeSort(vector<int> &, int, int, int);

int main(){
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

    return 0;
}

void display(vector<int> arr){
    for(int value : arr){
        cout << value << " ";
    }
    cout << endl;
}

void merge(vector<int> &arr, int low, int high){
    if(high >= low) return;

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

    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}