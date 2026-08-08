#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum (vector<int> arr, int n , int target ) {
    unordered_map <int, int> m;  vector<int>ans;
  for(int i =0; i< n; i++) {
    int first=arr[i];
    int second=target-first;
    if(m.find(second)!=m.end()) {
        ans.push_back(arr[i]);
        ans.push_back(second);
        return ans;
    }
    m[first]=i;
  }  
  return ans;
    
}
int main () {
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i = 0 ; i< n; i++) {
    cin>>arr[i];
    }
    int target;
    cin>>target;
    vector<int> ans =twoSum(arr,n,target);
    cout<<ans[0]<<" "<<ans[1]<<" ";
    

    return 0;

}
 
