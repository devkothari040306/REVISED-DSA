#include<bits/stdc++.h>
using namespace std;
class Teacher  {
    public:
    string name;
    int* agePtr;
    Teacher(string name , int age) {
        agePtr=new int;
        *(agePtr)=age;
         this->name=name;
    }
    Teacher(Teacher &obj) {
     this->name=obj.name;
    //  this->agePtr=obj.agePtr;   // shallow copy...
    agePtr=new int; // deep copy
    *agePtr=*obj.agePtr;
    }
    void getInfo() {
        cout<< name <<" "<<*agePtr<<endl;
    }
};
int main () {
    Teacher t1("Dev", 20);
    t1.getInfo();
    Teacher t2(t1);
    t2.getInfo();
    *(t2.agePtr)=23;
    t2.getInfo();
    t1.getInfo();
    return 0;
}






















// // SHALLOW AND DEEP COPY CONSTRUCTOR -> pointers
// #include<bits/stdc++.h>
// using namespace std;
// class Student  {
//     public:
//  string name;
//  string subject;
//  int* agePtr;
   
//      Student(string name, string subject , int age) { // Parameterised constructor...
//      this->name=name;
//     agePtr=new int;
//     *agePtr=age;
//      this->subject=subject;
//      }

//      Student(Student & obj) {   // Shallow COPY Constructor called...
//         cout<<"Copy Constructor called..." <<endl;
//         this->name=obj.name;
//         this->subject=obj.subject;
//         // this->agePtr=obj.agePtr; // shallow copy problem...
//         agePtr=new int;      /*Deep Copy ...*/
//         *agePtr= *obj.agePtr;
//      }
//      void getInfo() {
//      cout<<name<<" "<<*agePtr<<" "<<subject<<endl;

//      }
//     };
// int main() {
//    Student s1("Dev", "CSE", 20);
//    s1.getInfo();
 
//    Student s2(s1);
//    *(s2.agePtr)=26;
//    s2.getInfo(); // in shallow copy the pointer is pointing to same memory location so the value of s1 also changed with s2.
//    s1.getInfo();
  
  
//     return 0;
// }