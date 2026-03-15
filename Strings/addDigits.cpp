
#include<bits/stdc++.h>
using namespace std;

int main(){
      string s;
      getline(cin,s);
      
      string s1;
      getline(cin,s1);
      
      
      int sum = 0;
      string ans;
      int carry = 0;
      
      int i = s.size() - 1;
      int j = s1.size() - 1;
      
      
      while( j >= 0 ){
              sum = (s[i] - '0') + (s1[j] - '0') + carry;
              carry = sum / 10;
              ans += (sum % 10) + '0';
             
              i--;
              j--;
      }
      
      while( i >= 0){
            sum = (s[i] - '0') + carry;
            carry = sum / 10;
             ans += '0' + (sum % 10);
            i--;
      }
      
     if(carry)
      ans += '1';
      
      reverse(ans.begin(), ans.end());
      
      cout << ans << endl;
}