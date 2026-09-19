#include<bits/stdc++.h>
using namespace std;

class CircularQueue {
    public:
    int cap,currSize;
    int* arr;
    int f ,r;
    CircularQueue(int size) {

        cap=size;
        arr=new int[cap];
        currSize=0;
        f=0,r=-1;
    }
    void push(int data ){
        if(currSize==cap) return;

        r=r+1%cap;
      
        arr[r]=data;
          currSize++;
    }
    void pop() {
        if(isEmpty()) {
            return ;
        }
        else {
        f=f+1%cap;
        currSize--;
    }
}
    int  front() {
        if(isEmpty()) {
return -1;
        }
return arr[f];
    }

    bool isEmpty() {
        return currSize==0;
    }
    void printCQ() {
        for(int i =0; i<cap; i++ ) {
            cout<<arr[i];
        }
        cout<<endl;
    }

};
int main () {
    CircularQueue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    
    cq.pop();
   cout<< cq.front(); 
   cout<<endl;
   cq.printCQ();
   while(!cq.isEmpty()) {
    cout<<cq.front()<< " ";
    cq.pop();
   }
    return 0;
}