#include<bits/stdc++.h>
using namespace std;
// int countDig(int n) {
//     int count=0;
//     while(n) {
//         n=n%10;
//         count++;
//     }
//     return count;
// }
void fibonacci (int n) {

    int a=0,b=1;
    for(int i= 0; i< n; i++) {
cout<<a<<"\n";
int temp=a+b;
a=b;
b=temp;
    }
}
int main () {
    int n =10;
    fibonacci(n);
    return 0;
}