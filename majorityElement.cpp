#include<bits/stdc++.h>
using namespace std;
// int majorty_Element_BF(vector<int> arr , int n) {
    
   
//     for(int val:arr) {
//         int freq=0;
//         for(int el:arr) {
//             if(val==el) {
//                 freq++;
//             }
//         }
//         if (freq>n/2) {
//              return val;
//         }
        
//     }
//     return -1;
// }

    
   
// int majorty_Element_OP(vector<int> arr , int n) {
//     sort(arr.begin(),arr.end());
// int freq=1, ans=arr[0];

// for(int i=1; i< n; i++) {
//     if(arr[i]==arr[i-1]) {
//         freq++;
//     }
//     else {
//         freq=1; 
//         ans=arr[i];
//     }

//     if(freq>n/2) {
//         return ans;

//     }
// }

    
//     return ans;
// }

        /*MAJORITY ELEMENT - MOORE'S APPROACH*/
    
     int moore_Approach(vector<int> &arr , int n ) {
        int freq=0, ans=0;
        for(int i=0; i<n; i++) {
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
    vector<int> arr={3,2,2,2};
    int n =4;
    // cout<<majorty_Element_BF(arr,n);
    
//   int ans= majorty_Element_OP(arr,n);
// cout<<ans;
int ans=moore_Approach(arr,n);
cout<<ans;
    return 0;
}
