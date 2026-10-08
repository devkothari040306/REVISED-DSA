//   INHERITANCE
#include<bits/stdc++.h>
using namespace std;
class Person {
    public:
    string name;
    int age;
    double marks;
    Person(string name, int age , double marks) {
        this->name=name;
        this->age=age;
        this->marks=marks;
    }
    // void getInfo() {
    //     cout<< name<<" " <<age<< " "<<marks <<endl;

    // }


};
class Student:public Person {
    public:
    string subject;
    Student(string name , int age , double marks, string subject ):Person(name , age , marks) {
        this->subject=subject;
    }
    void getInfo() {
         
        cout<< name<<" " <<age<< " "<<marks <<" "<<subject<< endl;

    }
    
};
int main () {
     Student s1("Dev",20,34,"CSE");
   s1.getInfo();
    
    return 0;
}