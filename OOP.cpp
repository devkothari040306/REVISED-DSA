#include<bits/stdc++.h>
using namespace std;
class teacher {
    private:
    
    double salary;

 public:

 string name;
 string subject;
 string dept;
 int age;
  
 void changeDept(string newDept) {
    dept=newDept;
 } 
 double setSalary(double s ) {
    salary= s;
 }
 double getSalary() {
    return salary;
    
 }
};

 int main () {
    
    teacher t1;
    t1.name="Dev";
    cout<<t1.name<<" ";
    t1.setSalary(2000);
    cout<<t1.getSalary();
    return 0;

 }