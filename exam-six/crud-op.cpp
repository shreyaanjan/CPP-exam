#include<iostream>

using namespace std;

int main (){
    int size, choice;

    cout << "Enter Size : ";
    cin >> size;

    int a[size];

    do
    {
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice){
        case 1:
            int index;
            if(index > size){
                cout << "Array Overflow";
            }
            
            int value;

            cout << "Enter Value for Insertion : ";
            cin >> value;
            break;

        // case 2:
             
        //     break;
        // case 3:
        //     int idx=0, updatedValue;

        //     idx--;

        //     break;
        // case 4:
        //     break;
        case 5:
            cout << "Thankyou !";
            break;        
        default:
            cout << "Invalid !";
            break;
        }
    } while (choice != 5);
    
    return 0;
}

// 1-create
// 2-read
// 3-update
// 4-delete
// 5-exit