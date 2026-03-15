

// can a number be expressed as sum of two integers 


#include<bits/stdc++.h>
using namespace std;

  bool isPrime(int n){
       if( n <= 1){
           return false;
       }
       if( n <= 3){
           return true;
       }
       if( n % 2 == 0 || n % 3 == 0){
           return false;
       }
       
       for( int i = 5; i * i <= n; i += 6){
           if( (n % i == 0) || (n % (i+2) == 0) ){
               return false;
           }
       }
       
       return true;
  }

int main(){
       int n;
       cin >> n;
       
       
       for( int i = 0; i <= n/2 ; i++){
           if(isPrime(i)){
               int numm = n - i;
           if( isPrime(numm)){
               cout << "Yes" << endl;
               return 0;
           }
           } 
       }
       cout << "No";
       return 0;
}