// #include<bits/stdc++.h>
// using namespace std;
// class teacher {
   
// //     private:
    
// //     double salary;

// //  public:


// //  string name;
// //  string subject;
// //  string dept;
// //  int age;
  
  
// //  void changeDept(string newDept) {
// //     dept=newDept;
// //  } 
// //  double setSalary(double s ) {
// //     salary= s;
// //  }
// //  double getSalary() {
// //     return salary;
    
// //  } 
// public:
//  teacher() {
//         cout<<"Non - Parameterised Contructor is called"<<endl;
        
//     }

// teacher(string n , string d , double s) {    // This is called contructor Overloading -Polymorphism example
//     cout<<"Parameterised constructor called";
//     cout<<endl;
//     name=n;
//     dept=d;
//     salary=s;
// }
// string name;
// string dept;
// double salary;
// teacher(teacher  &orgObj) {
//     cout<<"Copy Constructor Called"<<endl;
//     this->name=orgObj.name;
//     this->dept=orgObj.dept;
//     this->salary=orgObj.salary;

// }

//  void getInfo () {
//     cout<<"name:" <<name<<endl;
//      cout<<"dept:" <<dept<<endl;

//  }
//  };

//  int main () {
    
//     // teacher t1;
//     // cout<<endl;
//     // t1.name="Dev";
//     // cout<<t1.name<<"\n ";
//     // cout<<t1.dept<<"\n ";
//     // teacher t2;
//     // t1.setSalary(2000);
//     // cout<<t1.getSalary()<<endl;
//     // return 0;
// teacher t1("Dev", "CSe",2000);
//   t1.getInfo();
//   teacher t2(t1);
//   t2.getInfo();
// return 0;
//  }

 // inheritance
#include<bits/stdc++.h>
using namespace std;
// class student {
//     public:
//     string name;
//     int age;
//  void cgpa (double cgpa) {
//      cout<<cgpa;
//  }
// };
// //  class marks : public student {
// //     public:
// //     int marks;
// //  };
//   class marks {
//     public:
//     int marks;
//  };
//  class subject : public student , public marks{
//     public:
//      string subject;
//  };

//  int main () {
//     subject s1;
//     s1.age=20;
//    s1.cgpa(88.5);
//    cout<<endl;
// cout<<s1.age;
//     return 0;
//  }

//  function overloading

class  person {
    public:
    void  info(int x) {
        cout<<"information is presented as integer:"<<x<<endl;

    }

    void info(char x) {
        cout<<"information is presented as character:"<<x<<endl;
    }

};

//  function overriding

class  number {
    public:
    void  info(int x) {
        cout<<"information is presented as integer:"<<x<<endl;

    }

   
    
};
class floating : public number {
    public:
     void info(float x) {
        cout<<"information is presented as float:"<<float(x)<<endl;
    }

};

int main () {
    floating i2;
    i2.info(4.3); 
    cout<<endl;
 
  return 0;
}