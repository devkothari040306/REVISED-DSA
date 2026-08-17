#include<bits/stdc++.h>
using namespace std;
pair<int,int> linearSearch(vector<vector<int>> mat , int target) {
   
    int  rows=mat.size();
    int cols=mat[0].size();
    for(int i = 0; i< rows; i++) {
        for(int j=0; j< cols; j++) {
            if(mat[i][j]==target) {
               return{i,j}; 
            }
        }
    }
    return {-1,-1};


}
int max_Row_Sum(vector<vector<int>> mat) {
      int  rows=mat.size();
    int cols=mat[0].size();
    int maxSum=INT_MIN;
    for(int i = 0; i< rows; i++) {
        int rowSum=0;
        for(int j=0; j< cols; j++) {
            rowSum+=mat[i][j];
}
maxSum=max(maxSum,rowSum);
    }
    return maxSum;
}
int max_Col_Sum(vector<vector<int>>& mat) {
      int  rows=mat.size();
    int cols=mat[0].size();
    int maxSum=INT_MIN;
    for(int i = 0; i< cols; i++) {
        int colSum=0;
        for(int j=0; j< rows; j++) {
            colSum+=mat[j][i];
}
maxSum=max(maxSum,colSum);
    }
    return maxSum;
}
int diagonal_Sum(vector<vector<int>> &mat) {
    int rows=mat.size();
    int cols =mat[0].size();
    int diagonalSum=0;
    for(int i = 0; i<rows; i++) {
    diagonalSum+=mat[i][i];
    if(i!=rows-i-1) {
        diagonalSum+=mat[i][rows-i-1];
    } //  OPTIMISE APPROACH 
    }
    return diagonalSum;

}
int main () {
    vector<vector<int>>mat={{1,2,3},{4,5,6},{7,8,9}};
    int target=5;
    pair<int,int>p=linearSearch(mat,target);
    cout<<p.first<<" "<<p.second;
    cout<<endl;
 cout<<max_Row_Sum(mat);
     cout<<endl;
 cout<<max_Col_Sum(mat);
 cout<<endl;
 cout<<diagonal_Sum(mat);
    return 0;
}