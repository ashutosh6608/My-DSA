

#include<bits/stdc++.h>
using namespace st;


int main(){
     string s;
     cin >> s;
     
     
     int n = s.size();
     
     if(s[n-1] >= '6'){
         int i = n-2;
         
         while( i >= 0 && s[i] == '9'){
             s[i] = '0';
             i--
         }
         
         if( i < 0){
              s = '1' + s;
         }
         else {
             s[i]++;
         }
         
         s[n-1] = '0';
         
         cout << s;
     }
}