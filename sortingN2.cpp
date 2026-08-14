#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &arr, int n  ) {
    
    for(int i =0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }

        }
    }

}
void selectionSort(vector<int> &arr, int n  ) {
    
    for(int i =0; i<n-1; i++) {
        int SI=i;
        for(int j=i+1; j<n; j++) {
            if(arr[j]<arr[SI]) {
               SI=j;
            }
        }
        swap(arr[SI],arr[i]);
    }
    
}
void insertionSort(vector<int> &arr, int n ) {

    for(int i =1; i< n; i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr) {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
    
}


int main() {
    int n ;
    cout<<"Enter size of array: ";
    cin>>n;
    
    vector<int> arr(n);
    cout<<"Enter the array.";
    for(int &val:arr) {
        cin>>val;
    }

//    bubbleSort(arr,n);
// selectionSort(arr,n);
insertionSort(arr,n);
   cout<<"The sorted array is :";
     for(int val:arr) {
       cout<<val<<" ";
    }


    return 0;
}