
// print largest odd number

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    
    int n = s.size();
    
    
    for( int i = n-1; i >= 0; i--){
          if((s[i] - '0') % 2 != 0){
              cout << s.substr(0,i+1);
              return 0;
          }
    }
     cout << "";
}