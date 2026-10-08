// CONTRUCTORS 
// classes and objects
#include<bits/stdc++.h>
using namespace std;
class Student  {
    public:
    // automatically giving the values to the object  thorugh constructor
     
        
//     Student() { // non-parameterised constructor
//          name="Dev";
//          subject="DSA";
//          age=20;
//          cout<<"constructor called"<<endl;
//     }
//     void printDetails(string n, string sub, int a) {
//         name=n;
//         subject=sub;
//         age=a;
        
//     }
// };
 string name;
 string subject;
 int age;
   
     Student(string n , string s , int a) {
     name=n;
     subject=s;
     age=a;
     }
      

     void getInfo() {
       cout<<name<<" ";
     }
     
    
    };
int main() {
   Student s1("Dev", "CSE", 20);
   s1.getInfo();

  
  
    return 0;
}