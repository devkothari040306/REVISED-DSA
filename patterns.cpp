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
// int main () {      7.PYRAMID PROBLEM 
//     int n =5;   
//       for(int i = 0 ; i<n; i++) { 
//         for(int j=0; j<n-i-1; j++) {// spaces
// cout<<" ";
//         }
//         for(int j=0; j<2*i+1; j++) {// stars
// cout<<"*";
//         }

//         cout<<endl;
//     }
   
//     return 0;
// }
// int main () {     // 8. REVERSE PYRAMID PROBLEM 
//     int n =5;   
//       for(int i = 1 ; i<=n; i++) { 
//         for(int j=1; j<i; j++) {// spaces
// cout<<" ";
//         }
//         for(int j=1; j<2*(n-i); j++) {// stars
// cout<<"*";
//         }
// //          for(int j=0; j<i; j++) {// stars2
// // cout<<"*";
// //         }

//         cout<<endl;
//     }
   
//     return 0;
// }

// int main () {     // 10. HALF BUTTERFLY
//     int n =5;   
//       for(int i = 0 ; i<n; i++) { 
//         for(int j=0; j<=i; j++) {// spaces
// cout<<"*";
//         }
//         cout<<endl;
// }
//   for(int i = 0 ; i<n-1; i++) {
//         for(int j=i; j<n-1; j++) {// stars
// cout<<"*";
//         }
// //       

//         cout<<endl;
//     }
   
//     return 0;
// }

// int main () {
        
//  //11.alternate 1's and 0's printing
//  int n=5; int start=0;
//  for(int i= 0; i< n; i++) {
//         if(i%2==0)  start=1;
//         else start=0;
//         for(int j =0; j<=i;j++) {
//                 cout<<start<<" ";
//                 start=1-start;
//         }
//         cout<<endl;

//  }
// return 0;
// }

// int main () {   // 12. NUMBERS IN V SHAPE
//         int n  = 4;
//         for(int i = 1; i<=n; i++) {
//         for(int j =1; j<=i; j++) {
//                 cout<<j;
//         }
//          for(int j =1; j<=2*(n-i); j++) {
//                 cout<<" ";
//         }
//         for(int j=i; j>=1; j--) {
//                 cout<<j;
//         }
// cout<<endl;
// }
//         return 0;

// }
// int main () {
//     int n =5;   /*  13. INCREASING    nums..*/
//     int num=1;
//       for(int i = 1 ; i<=n; i++) {
        
//         for(int j=1; j<=i; j++) {
// cout<<num++<<" ";
//         }
//         cout<<endl;
//     }
   
//     return 0;
// }
// int main () {
//     int n =5;   /*  14. INCREASING    nums..*/
   
//       for(int i = 1 ; i<=n; i++) {
//          char ch='A';
//         for(int j=1; j<=i; j++) {
// cout<<ch++<<" ";
//         }
//         cout<<endl;
//     }
   
//     return 0;
// }
// int main () {
//     int n =5;   /*  15. INCREASING    nums..*/
   
//       for(int i = 0 ; i<n; i++) {
//          char ch='A';
//         for(int j=0; j<n-i; j++) {
// cout<<ch++<<" ";
//         }
//         cout<<endl;
//     }
   
//     return 0;
// }
// int main () {
//     int n =5;   /*  16. INCREASING    nums..*/
//    char ch='A';
//       for(int i = 0 ; i<n; i++) {
        
//         for(int j=0; j<=i; j++) {
// cout<<ch<<" ";
//         }
//         ch++;
//         cout<<endl;
//     }
   
//     return 0;
// }

// int main () {
//     int n =4;   /*  17. INCREASING and decreasing characters with spaces on first    nums..*/
 
//       for(int i = 0 ; i<n; i++) {
         
//         for(int j=0; j<n-i-1; j++) {
// cout<<" ";
//         }
//         for(char ch='A';ch<='A'+i; ch++) { // increasing
// cout<<ch;
//         }
//             for(char ch='A'+i-1;ch>='A'; ch--) { //decreasing
// cout<<ch;
//         }
        
        
//         cout<<endl;
//     }
   
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     for (int i = 0; i < n; i++) {

//         for (char ch = 'E' - i; ch <= 'E'; ch++) {
//             cout << ch << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// int main() {
//     int n = 4; // 21. hollow square

//     for (int i = 1; i <= n; i++) {

//         for (int j =1; j<=n ;j++) {
// if(i==1 || i==n || j==1||j==n) {
//         cout<<"*";
// }
// else {
//         cout<<" ";
// }
//         }

//         cout << endl;
//     }

//     return 0;
// }



// int main() {
//     int n = 4; // 21. hollow diamond

//     for (int i = 0; i < n; i++) {

//         for (int j =0; j<n-i-1; j++) {
//                 cout<<" ";
//         }
//         cout<<"*";
        
//         if(i!=0) {
//            for (int j =0; j<2*i-1; j++) {
//                 cout<<" ";
//         }
//         cout<<"*";
// }
//         cout<<endl;
// }


//  for (int i = 0; i < n-1; i++) {
//         for(int j= 0 ; j<i+1; j++) {
//                  cout<<" ";
//         }
//         cout<<"*";
//           if(i!=n-2) {
// for(int j=0 ; j<2*(n-i)-5; j++) {
//                  cout<<" ";
//         }
      
//         cout<<"*";
//         }
//         cout<<endl;
//  }

//  cout<<endl;
//     return 0;

// }
 int main () {     // 23.PYRAMID PROBLEM of nums 
    int n =4;   
      for(int i = 1 ; i<=n; i++) { 
        for(int j=1; j<=n-i; j++) {// spaces
cout<<" ";
        }
        for(int j=1; j<=i; j++) {// stars
cout<<j;
        }

      for(int j=n-i; j>=1; j--) {// stars
cout<<j;
        }
        cout<<endl;

    }

   
    return 0;
}

