
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    int res = s[0] - '0';
    
    for( int i = 1; i < s.size(); i+=2){
         char op = s[i];
         int ans = s[i+1] - '0';
         
         if(op == 'a')
         res = res & ans;
         
         else if(op == 'b')
         res = res | num;
         
         else if(op == 'c')
         res = res ^ num;
    }
    cout << result;
}


