#include<bits/stdc++.h>
using namespace std;
// class Stack { // implementing the Stack  using the arrays / vectors
//     public:
//     vector<int> v;
//     void push(int val) {
//         v.push_back(val);

//     }
//     void pop() {
//         v.pop_back();

//     }
//     int top() {
//         return v[v.size()-1];
//     }
//     bool empty() {
//         return v.size()==0;
//     }
  
   
// };
class Stack { // implementing the Stack  using the Linked List 
    public:
    list <int> ll;
    void push(int val) {
        ll.push_front(val);

    }
    void pop() {
        ll.pop_front();

    }
    int top() {
        return ll.front();
    }
    bool empty() {
        return ll.size()==0;
    }
  
};
int main () {
    Stack s;

    // stack <int> s;    => original stl for stacks
    s.push(5);
    s.push(6);
    s.push(7);
    s.pop();
    s.push(8);      // printing the stack elements
      while(!s.empty()) {
        cout<<s.top()<< " ";
        s.pop();

      }
    return 0;
}