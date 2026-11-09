//   INHERITANCE
#include<bits/stdc++.h>
using namespace std;
class Person  {
    public:
    int age ; 
    string name;
    
    Person(string name , int age) {
        this->name=name;
        this->age=age;
    }
    void getInfo() {
        cout<<name<<" "<<age<<endl;
    }

};
class Student:public Person {
    public: 
    int marks;
    Student(string name , int age , int marks):Person(name, age) {
        this->marks=marks;
    }
    void getInfo() {
        cout<<name <<" "<< age<< " "<<marks<<endl;
    }

};
int main () {
    Person p1("Dev", 20);
    p1.getInfo();
    Student s1("dev",20 , 99);
    s1.getInfo();
    return 0;
}

























// class Person {
//     public:
//     string name;
//     int age;
//     double marks;
//     Person(string name, int age , double marks) {
//         this->name=name;
//         this->age=age;
//         this->marks=marks;
//     }
//     // void getInfo() {
//     //     cout<< name<<" " <<age<< " "<<marks <<endl;

//     // }


// };
// class Student:public Person {
//     public:
//     string subject;
//     Student(string name , int age , double marks, string subject ):Person(name , age , marks) {
//         this->subject=subject;
//     }
//     void getInfo() {
         
//         cout<< name<<" " <<age<< " "<<marks <<" "<<subject<< endl;

//     }
    
// };
// int main () {
//      Student s1("Dev",20,34,"CSE");
//    s1.getInfo();
    
//     return 0;
// }