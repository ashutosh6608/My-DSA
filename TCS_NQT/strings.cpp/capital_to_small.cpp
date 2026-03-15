

#include<bits/stdc++.h>
using namespace std;


int main(){
      string str;
      getline(cin, str);
      
      for ( char ch : str){
          if(isupper(ch)){
              ch = tolower(ch)
          }
          else {
              ch = toupper(ch);
          }
      }
      
      cout << str;
      return 0;
}