// this pointer
#include<bits/stdc++.h>
using namespace std;
class Student  {
    public:
 string name;
 string subject;
 int age;
   
     Student(string name, string subject , int age) { // Parameterised constructor...
     this->name=name;
     this->age=age;
     this->subject=subject;
     }

     Student(Student & obj) {   // COPY Constructor called...
        cout<<"Copy Constructor called..." <<endl;
        this->name=obj.name;
        this->subject=obj.subject;
        this->age=obj.age;
     }
     void getInfo() {
     cout<<name<<" "<<age<<" "<<subject<<endl;

     }
    };
int main() {
   Student s1("Dev", "CSE", 20);
   s1.getInfo();
 
   Student s2(s1);
   s2.getInfo();
  
  
    return 0;
}