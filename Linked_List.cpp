#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int val) {
        data=val;
        next=NULL;
    }
};
class List {
    Node* head;
    Node* tail;
    public :
    List(){
    head=tail=NULL;
}
 // PUSH FRONT TO LL
 void push_front(int val) {
    Node* newNode= new Node(val); // creating the new node
     // if the LL IS EMPTY
     if(head==NULL) {
        head=tail=newNode;
        return;
     }
     else {    // If the LL is not empty -  /Creating the new Node(same)   / establish the relation with the head  / then head becomes newNode
      newNode->next=head;
      head=newNode;
     
     }
 }
 void push_back(int val) { // create the new Node and it will point to the NULL
    Node* newNode =new Node(val);
    if(head==NULL) {
        head=tail=newNode;
        return;
    }
    else {
        tail->next=newNode;
        tail=newNode;
    }
 }
 void pop_front() {
    if(head==NULL) {
        return;
    }
    else { // creating the temp. pointer for address of head
        Node* temp=head;
        // move the head to next node
        head=head->next;
        // break the  node from the LL 
        temp->next=NULL;
        // delete the node 
        delete temp;
    }
 }
 void pop_back() {
    Node* temp=head;
    if(head==NULL) { cout<<"empty LL"; 
         return;
    } 
    while(temp->next !=tail) {
        temp=temp->next;
    }
    temp->next=NULL;
    delete tail;
    tail=temp;

 }
 void insertNode(int val , int pos) {

    Node* temp=head;
    if(pos==0) {
        push_front(val);
        return;
    }
    if(pos<0) {
        cout<<"Invalid"<<" ";
        return;
    }
    for(int i = 0; i< pos-1; i++) {
        if(temp==NULL) {
            cout<<"invalid"<<" ";
            return;
        }
        temp=temp->next;
    }
    Node* newNode = new Node(val);
    newNode->next=temp->next;
    temp->next=newNode;

 }
  int search(int target) {
    Node* temp=head;
    int idx=0;
    while(temp!=NULL) {
        if(temp->data==target) {
           return idx;
        }
        temp=temp->next;
        idx++;
    }
    return -1;
 }
 void printLL() {
    // creating a temp pointer;
    Node *temp=head;
    while (temp!=NULL) {
 cout<<temp->data <<" ";
  temp = temp->next;
    } 
    cout<<endl;
 }
};
int main () {
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.pop_front();
    ll.pop_back();
    ll.insertNode(4,1);
    ll.printLL();
 cout<<ll.search(4);
    return 0;
}