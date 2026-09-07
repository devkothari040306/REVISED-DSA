#include<bits/stdc++.h> 
// Implement the QUEUE DATA STRUCTURE USING LINKED LIST //
using namespace std;
// class Node {
//     public :
//     int data;
//     Node* next;
//     Node(int val) {
//         data=val;
//         next=NULL;
//     }
// };
// class Queue{
//     Node* head;
//     Node* tail;
//     public:
//     Queue() {
//         head=tail=NULL;
//     }
//     void push(int val) { // insert at tail of LL
//          Node* newNode=new Node(val);
//          if(empty()) {
//             head=tail=newNode;
//          }
//          else {
//         tail->next=newNode;
//         tail=newNode;
//          }

//     }
//     void pop() {
//         if(empty()) {
//             cout<<"LL is Empty";
//             return;
//         }
//         else {
//             Node*temp=head;
//             head=head->next;
//             delete temp;
//         }
//     }
//     int front() {
//         if(empty()) {
//             cout<<"Empty";
//             return -1 ;
//         }
//         else {
//         return head->data;
//         }
//     }
//     bool empty() {
//         return head==NULL;
//     }
    
// };

int main () {
    queue<int>q;
    // Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
q.pop();
q.push(1);
cout<<q.front();
cout<<endl;
while(!q.empty()) {
    cout<<q.front()<<" ";
    q.pop();
}
    return 0;
}