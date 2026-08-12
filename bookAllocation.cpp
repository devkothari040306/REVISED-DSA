#include<bits/stdc++.h>
using namespace std;
 bool isValid(vector<int> &arr , int n , int m , int maxAllotedPages) {
int students=1, pages=0;
for(int i = 0 ; i< n; i++) {
    if(arr[i]>maxAllotedPages) return false;
    if(pages+arr[i]<=maxAllotedPages) {
        pages+=arr[i];
    } else {
        students++;
        pages=arr[i];
    }
}
   return  students<=m?true:false;
}
 
int bookAllocation(vector<int> &arr, int n, int m )  {
    if(m>n) {
        return -1;
    }
    int sum=0; int ans=-1;
    for(int val:arr) {
        sum+=val;
    }
    int st=0, end=sum;
    while(st<=end ){
        int mid = st+(end-st)/2;
        if(isValid(arr,n,m, mid)) {
     ans=mid;
            end=mid-1;
        }
        else st=mid+1;
    }
    return ans;
}
int main() {
    vector<int> arr={2,1,3,4};
    int n =4 ,m=2;
    cout<<bookAllocation(arr,n,m);

    return 0;
}