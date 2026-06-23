#include<bits/stdc++.h>
using namespace std;
// void All_Subarrays(vector<int> &arr, int n) {    SUBARRAYS PRINTING
//     for(int st=0; st< n; st++) {
//         for(int end = st; end<n; end++) {
//             for(int i = st; i<=end; i++) {
//                 cout<<arr[i] ;
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
/* MAXIMUM SUBARRAY SUM*/
// int maximumSubarray_Sum_BF(vector<int> & arr , int n) { 
//     int maxSum=INT_MIN; 
//     for(int i = 0 ; i< n; i++) {
//         int currSum=0;
//         for(int j = i; j< n; j++) {
//             currSum+=arr[j];
//              maxSum=max(maxSum, currSum);
//         }
//     }
//     return maxSum; 
    
// }
 int maxSum_Op(vector<int> & arr, int n ) {
    int maxSum=INT_MIN;
    int currSum=0;
    for(int i = 0; i<n; i++) {
        currSum+=arr[i];
        maxSum=max(currSum, maxSum);
        if(currSum<0){
            currSum=0;
        }

    }
    return maxSum;
 } 



int main () {
    vector<int> arr={1,5,-1,2};
    int n =4;
    // All_Subarrays(arr,n);
    // cout<<maximumSubarray_Sum_BF(arr,n);
     cout<<maxSum_Op(arr,n);
return 0;
}
 