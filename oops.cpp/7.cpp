// //  compile time polymorphism
// // 1.constructor Overloading
// #include<bits/stdc++.h>
// using namespace std;
// // 
//  class Com {
//     public:
//     string name;
//     int age;
//    Com() {
//     cout<<"non-prameterised called"<<endl;
//    }
//    Com(string name,int age) {
//     this->name=name;
//     this->age=age;
//     cout<<"constructor overloaded";
//    }
//  };
// int main () {
// // Com c1("dev",20);
// Com c1;

//     return 0;
// }
//  compile time polymorphism
// 2.function Overloading
#include<bits/stdc++.h>
using namespace std;
// 
 class Com {
    public:
    string name;
    int age;
    Com(string name, int age ) {
        this->name=name;
        this->age=age;
    }
    void getInfo(){
        cout<<name<<" "<<age<< "through function 1"<<endl;
    }
    void getInfo(string name, int age ){
        cout<<age <<" "<<name  <<" "<<"through function 2"<<endl;
    }
 };
int main () {

Com c1("dev", 1);
c1.getInfo();
c1.getInfo(c1.name,c1.age);

    return 0;
}