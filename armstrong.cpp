#include<bits/stdc++.h>
using namespace std;
bool isArmstrongNumber(int n) {
    int sum=0 , dig=0 , count=0;
    int copy=n;
    int temp=n;
    while(temp) {
        count++;   
  temp/=10;
    }
    while(n) {
        dig=n%10;
        sum +=intPow(dig ,count); 
        n/=10;
    }
    return sum==copy;
}
int main () {
    int n = 153;
    if(isArmstrongNumber(n)) {
        cout<<"isArmstrongNumber";
    }
    else {

     cout<<"is not a ArmstrongNumber";}
    return 0;
}