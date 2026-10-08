#include<bits/stdc++.h>
using namespace std;
class Node {
    public :
    int data;
    Node* left;
    Node* right;
     Node(int val) {
        data=val;
        left=right=NULL;
     }
};
static int idx=-1;
Node* buildTree(vector<int>& preorder)  {
idx++;
// base case
if(preorder[idx]==-1) {
    return NULL;
}
Node* root=new Node(preorder[idx]);
root->left=buildTree(preorder);
root->right=buildTree(preorder);
return root;
}

int main() {
     cout<< "Enter the number of nodes:";
     int n;
     cin>>n;
    vector<int>preorder(n);
     cout<< "Enter the array of nodes:";
    for(int &val:preorder){
        cin>>val;
    }
    Node* root=buildTree(preorder);
    cout<<root->data<<endl;

    return 0;
}