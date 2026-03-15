


// first ocuurence and delete others

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
     string s;
     getline(cin,s);
     
     unordered_set<char>seen;
     
     string ans = "";
     
     for( char c : s){
     if(seen.count(c) == 0){
         ans += c;
         seen.insert(c);
     }
}
   cout << ans;
}