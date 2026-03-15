

#include<bits/stdc++.h>
using namespace std;

int main(){
      int num;
      cin >> num;
      int temp = num;
      int n = num;
      
      int digit = 0;
      
      while( n > 0){
            n = n/10;
            digit++;
      }
     
     int sum = 0;
     
     
     
     while ( temp > 0){
         int d = temp % 10;
         sum += pow(d,digit);
         temp = temp / 10;
     }
     
     if( sum == num){
         cout << "Armstrong Number";
     }   else {
         cout << "Not a Armstrong Number";
     }
}