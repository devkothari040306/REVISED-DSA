#include<bits/stdc++.h>
using namespace std; 
int maximum_Water(vector<int> heights , int n ) {
    int maxWater=0;
    int i =0,j=n-1;
    while(i<j){
        int height=min(heights[i],heights[j]);
        int width=j-i;
        int currWater=height*width;
        if(heights[i] <heights[j]) {
            i++;
        }
        else j--;
        maxWater=max(maxWater,currWater);
        
    }
    return maxWater;
}
int main () {
    vector<int> heights={1,8,6,2,5,4,8,3,7};
    
    int n=9;
    cout<<maximum_Water(heights,n);

    return 0;
}