//Run TIME POLYMORPHISM
#include<bits/stdc++.h>
using namespace std;   // 1. Function Overriding
class Animal {
public :
string name; 
string colour;
int age;
// virtual void getInfo()=0;   ABSTRACT CLASS
//  virtual void getInfo() {
//     cout<< name <<" "<< colour<<endl;
// }
};
class Dog :public Animal {
    public:
    string sound;
    
    void getInfo() {
        
        cout<<name<<" " <<sound <<endl;

    }
};


int main () {
    Animal a1;
    a1.name="dogesh";
    a1.age=12;
    a1.colour="white";
    Dog d1;
    d1.sound="bark";
    d1.getInfo();
    a1.getInfo();
    return 0;
}