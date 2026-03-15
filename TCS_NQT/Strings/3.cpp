

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int expand( string &s, int left, int right){
     while( left >= 0 && right < s.size() && s[left] == s[right]){
           left--;
           right++;
     }
     return right - left - 1;
}


int main(){
        string s;
        getline(cin,s);
        
        int start = 0;
        int maxLen = 0;
        
        for( int i = 0; i < s.size(); i++){
              int len1 = expand(s,i,i);
              int len2 = expand(s,i,i+1);
              
              int len = max(len1,len2);
              
              if( len > maxLen){
                  start = i - ( len - 1)/2;
                  maxLen = len;
              }
        }
        
        cout << s.substr(start,maxLen);
}