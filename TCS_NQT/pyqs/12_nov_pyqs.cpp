

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    int i = n;
    int sum = 0;
    
      while( i > 1){
          sum += i;
          i = i - 2;
      }
      
      cout << sum * m;
}