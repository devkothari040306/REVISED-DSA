#include<bits/stdc++.h>
using namespace std;
//  int bin_dec (int n ){  // BINARY TO DECIMAL CONVERSION
//     int ans=0;
//     int rem=0;
//     int pow=1;
//     while(n) {
//         rem=n%10;
//         n=n/10;
//         ans+=rem*pow;
//         pow*=2;
//     }
//     return ans;
//  }


int dec_to_bin(int n ) { //  DECIMAL TO BINARY CONVERSION
    int ans=0 , rem=0, pow=1;
    while(n) {
        rem=n%2;
        ans+=rem*pow;
        n/=2;
        pow*=10;
    }
    return ans;
    
}
 int main () {
    
//    cout<< bin_dec(110);
cout<<dec_to_bin(5);
    return 0;

 }
 

