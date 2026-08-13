#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> & arr , int n , int c, int min_Distance ) {
    int lastPos=arr[0],cows=1;
    for(int i =1; i< n; i++) {
        if(arr[i]-lastPos>=min_Distance) {
            cows++;
            lastPos=arr[i];
        }
    }
        if(cows==c) {
            return true;
        }
        else return false;
    }

 int aggressive_Cows(vector<int> & arr, int n, int c) {
    sort(arr.begin(), arr.end());
    int ans=0 , minStall=arr[0], maxStall=arr[n-1];

    
    int st=1 , end=maxStall-minStall;
    while(st<=end) {
        int mid = st+(end-st)/2;
        if(isPossible(arr,n,c,mid)) {
            ans=mid;
           st=mid+1; 
        }
        else  end=mid-1;
    }
    return ans;
 }

int main () {
 
      int n;
    cout<<"enter  number of stalls:";
    cin>>n;
    int c;
     cout<<"enter cows:";
     cin>>c;

     vector<int> arr(n);
     cout<<"Enter the  stalls array:";
     for(int &val: arr) {
        cin>>val;
     }
     cout<<aggressive_Cows(arr, n,c);
    return 0;
 }

