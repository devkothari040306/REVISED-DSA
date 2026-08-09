#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> arr, int n , int target) {
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for(int i=0; i< n; i++) {
        int j=i+1 , k=n-1;
        while(i>0 && arr[i]==arr[i-1]) continue;
        while(j<k) {
           int  sum=arr[i]+arr[j]+arr[k];
            if(sum>target) k--;
            else if(sum<target) j++;
            else{ vector<int> trip = {arr[i], arr[j], arr[k]};
            ans.push_back(trip);
            j++; k--;

            while(j<k && arr[j] ==arr[j-1]) j++;
            while (j < k && arr[k] == arr[k + 1])  k--;
                   
        }
    }
}
    return ans;
}
 int main () {
        int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    vector<vector<int>> ans = threeSum(arr, n, target);

    for (auto trip : ans) {
        cout << trip[0] << " "
             << trip[1] << " "
             << trip[2] << endl;
    }

    return 0;

   
 }