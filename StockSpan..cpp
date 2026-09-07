#include<bits/stdc++.h>
using namespace std;
vector<int> stock_span(vector<int> prices) {
    stack<int> s;
    vector<int>ans(prices.size(),0);
    for(int i =0 ; i< prices.size(); i++) {
        while(s.size()>0 && prices[s.top()]<=prices[i]) {  // top element is smaller than original
 s.pop();
        }
        if(s.empty()) {
            ans[i]=i+1;
        }
        else {
            ans[i]=i-s.top();
        }
        s.push(i);
    }
    return ans;
}
vector<int>previous_smaller(vector<int>& arr) {
    

}
int main () {
    vector<int>prices={100,80,60,70,60,75,85};
    vector<int> ans=stock_span(prices);
    for(int &val:ans) {
        cout<<val<<" ";
    }
    return 0;
}