

// convert a integer in to binary form;



#include<bits/stdc++.h>
using namespace std;

int main(){
      int n;
      cin >>n;

      if( n == 0){
          cout << 0;
      }

      string binary = "";

      while ( n > 0){
          binary += (n % 2) + '0';
          n = n/2;
      }

      reverse(binary.begin(), binary.end());
      cout << binary;
}