#include<bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int>& arr, int n ) {
    for(int i = 0; i< n-1; i++){
        for(int j= 0; j<n-i-1; j++) {
            if(arr[j+1]<arr[j]) {
                swap(arr[j], arr[j+1]);
            }
        }

    }
 
}
void selection_sort(vector<int> & arr , int n) {
    for(int i=0; i< n-1; i++) {
        int SI=i;
        for(int j=i+1; j<n; j++) {
            if(arr[j]<arr[SI]) {
                SI=j;
            }
          
        }
          swap(arr[i], arr[SI]);
    
    }
    
}
void insertion_sort(vector<int> & arr, int n) {
    for(int i = 1; i< n; i++) {
        int curr = arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr) {
          arr[prev+1]= arr[prev];
            prev--;

        }
        arr[prev+1]=curr;
    }
    
}
int main () {
    cout<<"Enter the size of array:"<<endl;
    int n ;
    cin>>n;
    cout<<"Enter the array:"<<endl;
    vector<int> arr(n);
    for(int &val :arr) {
        cin>>val;
    }
    // bubble_sort(arr,n);
    // cout<<"Sorted array:"<<endl;
    //     selection_sort(arr,n);
    // cout<<"Sorted array:"<<endl;
      insertion_sort(arr,n);
    cout<<"Sorted array:"<<endl;
      for(int val :arr) {
        cout<<val;
    }
    
    return 0;
}