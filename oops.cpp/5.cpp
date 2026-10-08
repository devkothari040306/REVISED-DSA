#include<bits/stdc++.h>
using namespace std;
class Animal  {
    public: 
    string sound;
    double *weightPtr;
    string colour;
    Animal(string sound , double weight , string colour) {
        this->sound=sound;
        weightPtr=new double;
       *weightPtr=weight;
        this->colour=colour;
    }
    void getInfo() {
        cout<<sound<<" " <<*weightPtr<<" "<<colour<<endl;
    }
    ~Animal() {
        cout<<"destructor called";
        delete weightPtr;
    }

};
int main () {
    Animal a1("bark",30,"pink");
    a1.getInfo();
    
    return 0;
}