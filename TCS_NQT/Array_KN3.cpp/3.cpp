
/// cout one missing element



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
      int n;
      cin >> n;
      
      int arr[n];
      
      for( int i = 0; i < n;i++){
          cin >> arr[i];
      }
      
      int xor1 = 0;
      int xor2 = 0;
      
      for( int i = 0; i <= n; i++){
             xor1 ^= i;
      } 
      
       for( int i = 0; i < n; i++){
             xor1 ^= arr[i];
      }
      
      int ans = xor1 ^ xor2;
      
      cout << ans << endl;
      
      
}