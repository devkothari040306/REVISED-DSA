#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> & arr, int n, int m, int max_Time) {
     int painters=1, time=0;
     for(int i =0; i< n; i++) {
        if(arr[i]>max_Time) {
            return false;
        }
        if(arr[i] +time<=max_Time) {
            time+=arr[i];
        }
        else {
            painters++;
            time=arr[i];
        }
    }
        return painters<=m?true:false;
     
    }
    int painters_Allocation(vector<int> &arr , int n , int m ) {
        int minTime=0, maxTime=0 ,ans=0;
        if(m>n) {
            return -1;
        }
        for(int i =0; i< n; i++) {
minTime = max(arr[i], minTime);
maxTime+=arr[i];
        }
        int st=minTime , end=maxTime;
        while(st<=end) {
            int mid = st + (end-st)/2;
            if(isPossible(arr,n, m , mid) ) {
                end=mid-1;
                ans=mid;
            }
            else st=mid+1; 
        }
        return ans;
    }

 int main () {
    int n;
    cout<<"enter  number of boards:";
    cin>>n;
    int m;
     cout<<"enter painters:";
     cin>>m;

     vector<int> arr(n);
     cout<<"Enter the  board array:";
     for(int &val: arr) {
        cin>>val;
     }
     cout<<painters_Allocation(arr, n,m);
    return 0;
 }