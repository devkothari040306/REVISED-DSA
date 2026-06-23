#include<bits/stdc++.h>
using namespace std;
 double power(double  x, int  n ) {
    if(x==0 ) return 0.00;
    if(x==1) return 1.00;
    if(n==0 ) return 1.00;
    if(x==-1 && n%2==0 ) return 1.00;
    if(x==-1 && n%2!=0) return -1.00;
     
     long binForm=n; double ans=1.0;
     if(n<0) {
        x=1/x;
        binForm=-binForm;
     }
     while(binForm>0) {
        if(binForm%2==1) {
            ans*=x;
        }
        x*=x;
        binForm/=2;
     }
     return ans; 
 }
int main () {
    int x=3;
    int n =5;
  cout<< power(x,n);

    return 0;
}