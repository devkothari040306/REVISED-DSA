// PRINT ALL SUBSETS 
#include<bits/stdc++.h>
using namespace std;
void getAllSubsets(vector<int>& arr, vector<int>& ans, int i ) {
    int n = arr.size();
    // base case
    if(i==n) {
        for(int val:ans) {
            cout<<val <<" ";
           
        }
        cout<<endl;
         return;
    }
    // inclusion of the elements 
    ans.push_back(arr[i]);
    getAllSubsets(arr, ans,i+1);
    // backtrack 
    ans.pop_back();
    // exclusion of the elements
    getAllSubsets(arr, ans, i+1);
     }


int main () {
    vector<int> arr={1,2,3};
    vector<int> ans;
 getAllSubsets(arr,ans , 0);
    return 0;
}