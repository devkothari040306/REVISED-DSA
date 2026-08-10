#include<bits/stdc++.h>
using namespace std;
void All_Subarrays(vector<int> &arr, int n) {   // SUBARRAYS PRINTING
    for(int i =0; i< n; i++) {
        for(int j=i; j<n; j++) {
            for(int k =i; k<=j; k++) {
                cout<<arr[k]<<" ";
            }
            cout<<" ";
        }
        cout<<endl;
    }
}
  
/* MAXIMUM SUBARRAY SUM*/
int maximumSubarray_Sum_BF(vector<int> & arr , int n) { 
  int maxSum=INT_MIN;
  for(int i=0; i< n; i++) {
    int currSum=0;
    for(int j=i; j< n; j++) {
        currSum+=arr[j];
        maxSum=max(maxSum,currSum);
    }
}
    return maxSum;

  }
 
 int maxSum_Op(vector<int> & arr, int n ) {
    int currSum=0;
    int maxSum=INT_MIN;
    for(int i = 0 ; i< n; i++) {
        currSum+=arr[i];
        maxSum=max(maxSum,currSum);
        if(currSum<0) {
            currSum=0;
        }

    }
    return maxSum;

 } 



int main () {
    vector<int> arr={1,2,-1,3};
    int n =4;
    // All_Subarrays(arr,n);
    // cout<<maximumSubarray_Sum_BF(arr,n);
     cout<<maxSum_Op(arr,n);
return 0;
}
 