#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& nums , int st , int mid , int end) {
    int piv=nums[end];
    int idx=st-1;
    for(int i = st; i< end; i++) {
        if(nums[i]<=piv) {
            idx++;
            swap(nums[idx], nums[i]);
        }
    }
    idx++;
    swap(nums[idx],nums[end]);
    return idx;
    }


 void quickSort(vector<int> &nums  , int st , int end ) {
    int n = nums.size();
    if(st<end) {
        int mid = st +(end-st)/2;
         int pivIdx=partition(nums,st,mid,end);
         quickSort(nums,st,pivIdx-1);
         quickSort(nums,pivIdx+1,end);
    }
 }
 

int main () {
    vector<int> nums={1,3,3,3,2,1};
    int st=0 , end=nums.size()-1;
    quickSort(nums,st, end);
    for(int & val:nums) {
        cout<<val <<" ";

    }
    cout<<endl;
    

return 0;
}