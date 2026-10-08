// classes and objects
#include<bits/stdc++.h>
using namespace std;
class Teacher  {
  float marks;  
public:
string name;
string dept;
int age;


 void changeDetails(string newDept , int newAge ) {
    dept=newDept;
    age=newAge;

 }
 void setMarks(float m) {
    marks=m;
 }
 float getMarks() {
    return marks;
 }
};
int main() {
    Teacher t1;
    t1.changeDetails("CSE",2);
    
    cout<<t1.dept <<" "<<t1.age<< " "<<endl;
    t1.dept="CSE-Core";
      cout<<t1.dept <<" "<<t1.age<< " "<<endl;
      t1.setMarks(99);
      cout<<"MARKS GIVEN:"<<t1.getMarks()<<endl;
    return 0;
}