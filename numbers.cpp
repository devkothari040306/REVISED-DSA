#include<bits/stdc++.h>
using namespace std;
// int countDig(int n) {
//     int count=0;
//     while(n) {
//         n=n%10;
//         count++;
//     }
//     return count;
// }
void fibonacci (int n) {

    int a=0,b=1;
    for(int i= 0; i< n; i++) {
cout<<a<<"\n";
int temp=a+b;
a=b;
b=temp;
    } 
}
int secondLargest(vector<int>& arr) {
    int n= arr.size();
    int max=INT_MIN, secMax=INT_MIN;
    for(int i = 0; i< n; i++) {
        if(arr[i]>max) {
            secMax=max;
            max=arr[i];
        }
        else if (arr[i]!=max && arr[i]>secMax ) {
            secMax=arr[i];
        }
    }
    return secMax;
}
int most_frequent_element(vector<int> & arr) {
    int n =arr.size();
   unordered_map<int,int> m;
   int freq=0, maxFreq=0,ans=0, element=0;
   for(int x: arr) {
    m[x]++;
   }
   for(auto & it:m) {
    freq=it.second;
    element=it.first;
    if(maxFreq<freq) {
        maxFreq=freq;
        ans=element;
    }
    else if(maxFreq==freq && element<ans) {
        ans=element;
    }

   }
   return ans;
}
vector<int> distinctElements(vector<int>& arr) {
    vector<int> ans;
    unordered_map<int,int> m;
    for(int val:arr) {
       if(m.find(val)==m.end()) {
            ans.push_back(val);
        }
        m[val]++;
    }
    return ans;
}
vector<int> uniqueElements(vector<int>& arr) {
    vector<int> ans;
    unordered_map<int,int> m;
    for(int val:arr) {
        m[val]++;
    }
    for(auto &it :m) {
        if(it.second==1) {
            ans.push_back(it.first);
        }
    }
    return ans;
}
vector<int> leaders_Array(vector<int>& arr) {
    vector<int> ans;
    int n= arr.size();
    int rightMax=arr[n-1];
    ans.push_back(rightMax);
    for(int i =n-2; i>=0; i--) {
        if(arr[i]>=rightMax){
            rightMax=arr[i];
            ans.push_back(arr[i]);

        }

    }
    // now reverse the array
    reverse(ans.begin(), ans.end());
    return ans;

}
int main () {
    // int n =10;
    // fibonacci(n);
    vector<int> arr={16,17,4,3,5,2};
   cout<< secondLargest(arr);
cout<<endl;
cout<<most_frequent_element(arr);
  
    cout<<endl;
    // vector<int>ans=distinctElements(arr);
    //  vector<int>ans=uniqueElements(arr);
    
    vector<int> ans=leaders_Array(arr);
    for(int &val:ans) {
        cout<<val<<" ";
    }
    cout<<endl;


      return 0;
}