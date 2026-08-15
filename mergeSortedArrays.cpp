#include<bits/stdc++.h>
using namespace std;
 vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n ) {
 vector<int> ans;
  int i=0,j=0;
  while(i<m && j<n) {
    if(nums1[i]<=nums2[j]) {
        ans.push_back(nums1[i++]);
    }
    else {
         ans.push_back(nums2[j++]);
    }
  }
  while(i<m) {
    ans.push_back(nums1[i++]);

  }
  while (j<n) {
    ans.push_back(nums2[j++]);
  }
  
      
  
  
  return ans;


 }
int main () {
    vector<int> nums1 ={1,2,3};
    vector<int> nums2={2,5,6};
    int n=3 ,m=3;
    vector<int> ans= merge(nums1,m , nums2, n);
  for(int val:ans) {
    cout<<val <<" ";
  }

    return 0;
}