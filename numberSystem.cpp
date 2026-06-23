/* Decimal TO Bin Conversion*/

#include <bits/stdc++.h>
using namespace std;
// int dec_to_Bin(int n ) {
//     int ans=0;
//     int pow=1;
//     while(n>0) {
//         int rem= n%2;
//         n= n/2;

//         ans+=rem*pow;
//         pow*=10;
          
  
//     }
//     return ans;
// }
/*  Bin TO Decimal  Conversion*/
int bin_to_dec(int n ) {   
     int ans=0; 
     int pow=1;
     while(n>0) {
        int rem=n%10;
        n/=10;
        ans+=rem*pow;
        pow*=2;
     }
     return ans;
}
int main () {
    int n=1000;
   cout<< bin_to_dec(n);
    return 0;
}