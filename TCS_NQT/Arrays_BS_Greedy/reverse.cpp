

#include<bits/stdc++.h>
using namespace std;


int main(){
      int n;
      cin >> n;
      
      int temp = abs(n);
      int ans = 0;
      
      while( temp > 0){
          int d = temp % 10;
          ans = ans * 10 + d;
          temp = temp / 10;
      }
      
      if( n < 0){
          cout << -ans;
      } else {
          cout << ans;
      }
}