#include<bits/stdc++.h>
using namespace std;
int main () {
    // int n =4; // square pattern
    // for(int i = 1; i<=n; i++) {
    //     for(int j = 1; j<= n; j++) {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
    // for(int i = 1; i<=n; i++) {    pattern triangle increasing
    //     for(int j = 1; j<= i; j++) {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

//     for(int i =1; i<=n; i++) {
        
//         for(int j=1; j<=i; j++){
//    cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     for(int i =1; i<=n; i++) {
        
//         for(int j=1; j<=i; j++){
//    cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     for(int i =1; i<=n; i++) {
        
//         for(int j=i; j<=n; j++){
//    cout<<"*";
//         }
//         cout<<endl;
//     }
//  for(int i =1; i<=n; i++) {
//         int num =1;
//         for(int j=i; j<=n; j++){
//    cout<<num++;
//         }
//         cout<<endl;
//     }

// for(int i =1; i<=n; i++) {
       
//         for(int j=1; j<=(n-i); j++){
//    cout<<" ";
//         }
//          for(int j=1; j<=i; j++){
//    cout<<"*";
//         }
//         for(int j =0; j<i-1; j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// for(int i =1; i<=n; i++) { TWO PYRAMIDS
       
//         for(int j=1; j<i; j++){
//    cout<<" ";
//         }
//          for(int j=i; j<=n; j++){
//    cout<<"*";
//         }
//         for(int j =n-i; j>=1; j--) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
int n = 5;
for(int i =1 ; i<=n; i++) {
    for(int j=1; j<=i; j++) {
cout<<"*";
    }   //
    cout<<endl;
}
    for(int i = 1; i<=n; i++) {
    for(int j=1;j<=n-i; j++) {
        cout<<"*";
    }
    cout<<endl;
}
    return 0;
}