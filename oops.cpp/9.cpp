#include<bits/stdc++.h>
using namespace std;
//STATIC IN FUNCTIONS
class parent {
    public:
    // void getInfo() {
    //     int x=1;
      
    //     cout<<x<<" ";
    //       x++;

    // }
      void getInfo() {
         static int x=1;
      
        cout<<x<<" ";
          x++;

    }
};
 
class child {
 public:
 static int y;
 
  void getY() {
   
    cout<<y <<" ";
    y++;
  }
  

};
int child ::y;

int main() {
    parent p1;
    p1.getInfo();
     p1.getInfo();
      p1.getInfo();
      cout <<endl;
child c1;
child::y=1;
child c2;


c1.getY();
c1.getY();
c1.getY();
cout<<endl;
c2.getY();
c2.getY();
c2.getY();
    return 0;
}