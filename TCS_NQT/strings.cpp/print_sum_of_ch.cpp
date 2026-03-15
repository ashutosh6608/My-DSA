

#include<bits/stdc++.h>
using namespace std;


int main(){
      string s;
      getline(cin, s);
      
      int total = 0;
      
      for ( char ch : s){
          if(isalpha(ch)){
              total +=  tolower(ch) - 'a' + 1;
          }
      }
      
      while(total > 9){
          int sum = 0;
          while(total > 0){
              sum += total % 10;
              total /= 10;
          }
          total = sum;
      }
        cout << total << endl;
        return 0;
}