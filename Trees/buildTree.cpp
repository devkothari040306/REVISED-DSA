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
// preorder TRAVERSEL
void preOrder(Node* root) {
    if(root==NULL) {
        return ;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
       preOrder(root->right);

}
void inOrder(Node* root) {
    if(root==NULL) {
        return ;
    }
    inOrder(root->left);
     cout<<root->data<<" ";
       inOrder(root->right);

}
void postOrder(Node* root) {
    if(root==NULL) {
        return ;
    }
    postOrder(root->left);
       postOrder(root->right);
       cout<<root->data<<" ";

}
void levelOrder(Node* root) {
  queue<Node*>q;
  q.push(root);
  q.push(NULL);
  while(!q.empty()) {
    Node* curr=q.front();
    q.pop();
    if(curr==NULL) {
        if(!q.empty()) {
            cout<<endl;
            q.push(NULL);
            continue;;
        }
        else {
            break;

        }
    }
    cout<<curr->data<<" ";
    if(curr->left!=NULL) {
        q.push(curr->left);
    }
    if(curr->right!=NULL) {
        q.push(curr->right);
    }
     
  }
  cout<<endl;
}
int height(Node* root) {
    if(root==NULL) {
        return 0;
    }
   int  leftHeight=height(root->left);
   int  rightHeight=height(root->right);
   return max(leftHeight,rightHeight)+1;
}
int countNodes(Node* root) {
    if(root==NULL) {
        return 0;
    }
    int leftCount=countNodes(root->left);
    int rightCount=countNodes(root->right);
    return leftCount+ rightCount+1;
}
int sumNodes(Node* root) {
     if(root==NULL) {
        return 0;
    }
   int leftSum=sumNodes(root->left);
   int rightSum=sumNodes(root->right);
  return  leftSum+rightSum+root->data;

}

int main() {
    //  cout<< "Enter the number of nodes:";
    //  int n;
    //  cin>>n;
    // vector<int>preorder(n);
    //  cout<< "Enter the array of nodes:";
    // for(int &val:preorder){
    //     cin>>val;
    // }
    vector<int> preorder={1,2,-1, -1, 3, 4, -1 , -1 ,5, -1,-1};
    Node* root=buildTree(preorder);
    cout<<root->data<<endl;
    preOrder(root);
    cout<<endl;
    inOrder(root);
        cout<<endl;
    postOrder(root);
        cout<<endl;
        levelOrder(root);
 cout<<endl;
 cout<<height(root)<< " ";
 cout<<countNodes(root)<<" ";
 cout<<sumNodes(root)<<" ";

    return 0;
}