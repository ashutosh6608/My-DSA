
/// here it matters 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
     if( n == 0 || n == 1){
         return 1;
     }
     
     int fact = 1;
     for( int i = 2; i <= n; i++){
           fact *= i;
     }
     return fact;
}

int main(){
     int n;
     int r;
     cin >> n >> r;

      int ans = factorial(n)/(factorial(n-r) * factorial(r));
      cout << ans;
}











///////////////////////////////////////////////////
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    
    for( char &c : s){
        c = 'Z' - (c - 'A');
    }
    
    cout << s;
}