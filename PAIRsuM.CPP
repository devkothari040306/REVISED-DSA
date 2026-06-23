#include<bits/stdc++.h>
using namespace std;
// vector<int>  pair_Sum_BF(vector<int> arr, int n , int target) {
//  vector<int> ans;
//  for(int i=0 ; i< n; i++) {
//     for(int j=i+1; j< n; j++) {
//         if(target==arr[i]+arr[j]) {
//             ans.push_back(i);
//             ans.push_back(j);
//         }
       
//     }
//  }
 
//  return ans;
// }
vector<int>  pair_Sum_optimised(vector<int> arr, int n , int target) {
 vector<int> ans;
 
 int i =0,j=n-1;
 while(i<j) {
    int ps=arr[i]+arr[j];
    if(target<ps) {
        j--;
    }
    else if(target>ps) {
        i++;
    }
       else {
            ans.push_back(i);
            ans.push_back(j);
        
       }
        }
        return ans;
    }
int main () {
    vector<int> arr={1,3,6,3,1};
    int n = 5;
    int target=6;
  vector<int> ans=  pair_Sum_optimised(arr,n,target);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}