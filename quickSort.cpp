#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>& arr, int st , int end) {
    int piv=arr[end];
    int idx=st-1;
    for(int j= st; j<end; j++) {
        if(arr[j]<=piv) {
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]); // dont use piv here , use arr[end];
    return idx; // returning the idx;
}
  void quickSort(vector<int>& arr, int st , int end) {
        // base case
        if(st>=end) {
            return;
        }
        if(st<end) {
            int pivIdx=partition(arr, st, end);
            //  left partition 
            quickSort(arr,st, pivIdx-1);
            // right partition
             quickSort(arr, pivIdx+1,end);
        }

    }


int main () {
    vector<int> arr={5,2,6,4,1,3};
    quickSort(arr,0,arr.size()-1);
    for(int val:arr) {
        cout<<val<< " ";
    }
    cout<<endl;
return 0;
    }
  