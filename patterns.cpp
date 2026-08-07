// #include<bits/stdc++.h>
// using namespace std;
// int main () {
//     // int n =4; // square pattern
//     // for(int i = 1; i<=n; i++) {
//     //     for(int j = 1; j<= n; j++) {
//     //         cout<<"*";
//     //     }
//     //     cout<<endl;
//     // }
    
//     // for(int i = 1; i<=n; i++) {    pattern triangle increasing
//     //     for(int j = 1; j<= i; j++) {
//     //         cout<<"*";
//     //     }
//     //     cout<<endl;
//     // }

// //     for(int i =1; i<=n; i++) {
        
// //         for(int j=1; j<=i; j++){
// //    cout<<j<<" ";
// //         }
// //         cout<<endl;
// //     }
// //     for(int i =1; i<=n; i++) {
        
// //         for(int j=1; j<=i; j++){
// //    cout<<i<<" ";
// //         }
// //         cout<<endl;
// //     }
// //     for(int i =1; i<=n; i++) {
        
// //         for(int j=i; j<=n; j++){
// //    cout<<"*";
// //         }
// //         cout<<endl;
// //     }
// //  for(int i =1; i<=n; i++) {
// //         int num =1;
// //         for(int j=i; j<=n; j++){
// //    cout<<num++;
// //         }
// //         cout<<endl;
// //     }

// // for(int i =1; i<=n; i++) {
       
// //         for(int j=1; j<=(n-i); j++){
// //    cout<<" ";
// //         }
// //          for(int j=1; j<=i; j++){
// //    cout<<"*";
// //         }
// //         for(int j =0; j<i-1; j++) {
// //             cout<<"*";
// //         }
// //         cout<<endl;
// //     }
// // for(int i =1; i<=n; i++) { TWO PYRAMIDS
       
// //         for(int j=1; j<i; j++){
// //    cout<<" ";
// //         }
// //          for(int j=i; j<=n; j++){
// //    cout<<"*";
// //         }
// //         for(int j =n-i; j>=1; j--) {
// //             cout<<"*";
// //         }
// //         cout<<endl;
// //     }
// int n = 5;
// for(int i =1 ; i<=n; i++) {
//     for(int j=1; j<=i; j++) {
// cout<<"*";
//     }   //
//     cout<<endl;
// }
//     for(int i = 1; i<=n; i++) {
//     for(int j=1;j<=n-i; j++) {
//         cout<<"*";
//     }
//     cout<<endl;
// }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
// int main () {     /* 1. RECTANGULAR PATTERN*/
//     int n=5;
//     for(int i = 0 ; i<n; i++) {
//         for(int j=0; j< n; j++) {
// cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;

// }
// int main () {
//     int n =4;   /* 2. INCREASING  PATTERN*/
//       for(int i = 0 ; i<n; i++) {
//         for(int j=0; j<=i; j++) {
// cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
   
//     return 0;
// }
// int main () {
//     int n =4;   /*  3. INCREASING  PATTERN of nums*/
//       for(int i = 1 ; i<=n; i++) {
        
//         for(int j=1; j<=i; j++) {
// cout<<j<<" ";
//         }
//         cout<<endl;
//     }
   
//     return 0;
// }
// int main () {
//     int n =4;   /*  4. INCREASING  PATTERN of nums..*/
//       for(int i = 1 ; i<=n; i++) {
        
//         for(int j=1; j<=i; j++) {
// cout<<i<<" ";
//         }
//         cout<<endl;
//     }
   
//     return 0;
// }
// int main () {
//     int n =4;   /*  5.Decreasing  PATTERN*/
//       for(int i = 0 ; i<n; i++) {
//         for(int j=i; j<n; j++) {
// cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
   
//     return 0;
// }
// int main () {
//     int n =5;   /*  6.Decreasing  PATTERN nums..*/
//       for(int i = 1 ; i<=n; i++) {
//         for(int j=1; j<=n-i+1; j++) {
// cout<<j<<" ";
//         }
//         cout<<endl;
//     }
   
//     return 0;
// }
int main () {
    int n =5;   
      for(int i = 0 ; i<n; i++) { 
        for(int j=0; j<n-i-1; j++) {// spaces
cout<<" ";
        }
        for(int j=0; j<2*i+1; j++) {// stars1
cout<<"*";
        }
//          for(int j=0; j<i; j++) {// stars2
// cout<<"*";
//         }

        cout<<endl;
    }
   
    return 0;
}