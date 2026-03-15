

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
      string s;
      getline(cin ,s);
      
      for( int i = 0; i < s.size() ; i++){
           if(isdigit(s[i])){
               s[i] = s[i] + 1;
           }
           else if(isalpha(s[i])){
               s[i] = s[i] + 1;
           }
           
          else if( s[i] == '@'){
               s[i] = '#';
           }
          else {
                s[i] = '@';
          } 
           
      }
      
      cout << s;
}