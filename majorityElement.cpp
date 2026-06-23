#include<bits/stdc++.h>
using namespace std;
// int majorty_Element_BF(vector<int> arr , int n) {
    
   
//     for(int el:arr) {
//          int freq=0;
//         for(int val:arr) {
//     if(el==val) {
//         freq++;
//     }
// }
//     if(freq>n/2) {
//         return el;
//     }
    
//     }
//     return -1;
//         }
// int majorty_Element_OP(vector<int> arr , int n) {
//     sort(arr.begin(), arr.end());
//      int ans=0, freq=1;
//      for(int i = 1; i< n; i++) {
//         if(arr[i-1]==arr[i])  { freq++;
//       ans=arr[i];
//      }
        
//         else {
//             freq=1;
//         }
      
//       if( freq>n/2 ){
//       return  ans;
//       }
// }
// return -1;
// }
         /*MAJORITY ELEMENT - MOORE'S APPROACH*/
    
    int moore_Approach( vector<int> arr,int n ) {
        int ans= 0, freq=0;
        for(int i =0; i< n; i++) {
            if(freq==0) {
                ans=arr[i];
            }
            if(ans==arr[i]) {
                freq++;
            }
            else freq--;
        }
        return ans;
    }

int  main () {
    vector<int> arr={2,3,1,3,3,3,3};
    int n =7;
//   cout<<  majorty_Element_OP(arr,n);
cout<<moore_Approach(arr,n);
    return 0;
}
