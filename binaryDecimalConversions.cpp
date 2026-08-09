#include<bits/stdc++.h>
using namespace std;
 int bin_dec (int n ){
    int ans=0;
    int rem=0;
    int pow=1;
    while(n) {
        rem=n%10;
        n=n/10;
        ans+=rem*pow;
        pow*=2;
    }
    return ans;
 }
int main () {
    
   cout<< bin_dec(110);
    return 0;
}