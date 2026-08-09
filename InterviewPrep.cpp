#include<bits/stdc++.h>
using namespace std;
 
//  int  lenght_of_longestSubstring (string s ) {
//    unordered_map<char,int> m;
//    int start=0, maxlen=0;
//    for(int i = 0 ; i<s.length(); i++) {
//     if(m.count(s[i]) && m[s[i]]>=start ) {
//        start= m[s[i]]+1;
//     } 
//     m[s[i]] =i;
//     maxlen=max(maxlen,i-start+1);

//    }
//    return maxlen;

//  }
//   bool  isPalindrome_possible (string s ) {
//    unordered_map<char,int> m;
//    for(char c:s) {
//     m[c]++;
//     } 
//     int countOdd=0;
//     for(auto & p:m) {
//         if(p.second%2 !=0) {
//             countOdd++;
            
//         } 
//     }
//     return countOdd<=1;
//    }

// bool isAnagram (string s , string t) {
//     if(s.length()!= t.length()) return false;
//     unordered_map<char,int> m;
//     for(char c:s) {
//         m[c]++;
//     }
//     for(char c:t) {
//         m[c]--;
    
//     if(m[c]<0) return false;
//     }
//     return true;
// }

// string reverseString(string s, int n) {
//     string ans="";
//     string word="";
//     reverse(s.begin(), s.end());
//     for(int i=0; i<n; i++) {
//         while(i<n && s[i] !=' ') {
//             word+=s[i];
//             i++;
//         }
//         reverse(word.begin(), word.end() );
//         if(word.length()>0) {
//             ans+="_" +word;
//         }
//       return ans.substr(1);

//     }
// }

// vector<int> mergerTwoSorted_Arrays(vector<int> a , vector<int> b , int  n , int m ) {
// vector<int> ans;
// int i = 0 , j=0;
// while (i<n && j<m) {
//     if(a[i]<=b[j]) ans.push_back(a[i++]);
//     else ans.push_back(b[j++]);
// }
// while (i<n ) {
//      ans.push_back(a[i++]);
// }
// while (j<m ) {
//      ans.push_back(b[j++]);
// }

// return ans;
// } 
vector<int> findAll_duplicates(vector<int> arr , int  n) {
    unordered_map<int,int> m ; 
    vector<int> ans;
    for(int val:arr) {
        m[val]++;
    }
    for( auto & p : m ) {
        if(p.second>1) {
            ans.push_back(p.second);
        }
    }
    return ans;
}
int main () {
    string s;
    getline(cin,s);
     string t;
    getline(cin,t);
    // cout<<isPalindrome_possible(s);
    // cout<<lenght_of_longestSubstring(s);
    // cout<<isAnagram(s,t);
    return 0;
}