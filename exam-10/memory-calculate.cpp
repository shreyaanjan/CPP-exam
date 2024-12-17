#include<iostream>
#include<vector>
using namespace std;

class Student{
    private :
        int id;
        string name;
    public :
        Student(int id, string name){
            this->id = id;
            this->name = name;
        }

        void getStudentDetails(){
            cout << "-------Student Details-------" << endl;
            cout << "Id of Student : " << this->id << endl;
            cout << "Name of Student : " << this->name << endl;
        }

        int getStudentId(){
            return this->id;
        }
};
int main(){
    vector <Student> students;
    int choice;

    do{
        cout << endl;
        cout << "Enter 1 to Add a Student " << endl;
        cout << "Enter 2 to Display Students Details " << endl;
        cout << "Enter 3 to Remove a Student by ID " << endl;
        cout << "Enter 4 to Search a Student by ID " << endl;
        cout << "Enter 5 to Exit " << endl;

        cout << "Enter Choice : ";
        cin >> choice;

        switch (choice){
        case 1:{
            int id;
            string name;

            cout << "Enter ID of Student : ";
            cin >> id;
            cin.ignore();

            cout << "Enter Name of Student : ";
            getline(cin, name);

            students.push_back(Student(id, name));
            break;
        }
        case 2:{
            for(auto &stu : students){
                stu.getStudentDetails();
            }
            break;
        }
        case 3:{
            int id;

            cout << "Enter ID of Student you want to Remove : ";
            cin >> id;

            bool isFound = false;

            for(auto i = students.begin(); i != students.end(); i++){
                if(i->getStudentId() == id){
                    students.erase(i);
                    isFound = true;
                    break;
                }
            }
            isFound == true ? cout << "Student is Removed !" << endl : cout << "Student not Found !" << endl;
            break;  
        }
        case 4:{
            int id;

            cout << "Enter ID of Student you want to Search : ";
            cin >> id;

            bool isFound = false;

            for(auto i = students.begin(); i != students.end(); i++){
                if(i->getStudentId() == id){
                    i->getStudentDetails();
                    isFound = true;
                    break;
                }
            }
            isFound == true ? cout << "" << endl : cout << "Student not Found !" << endl;
            break;
        }
        case 5:{
            cout << "Thankyou !" << endl;
        }
        }
    } while (choice != 5);

    return 0;
}