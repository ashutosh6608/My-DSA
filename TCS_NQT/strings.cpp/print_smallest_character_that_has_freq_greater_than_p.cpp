
#include<bits/stdc++.h>
using namespace std;

int main(){
      string s;
      int p;
      
      getline(cin, s);
      cin >> p;
      
      unordered_map<char,int>freq;
      
      for( int i = 0; i < s.size(); i++){
            freq[s[i]]++;
      }
      
      vector<int>arr(26,0);
      
      for ( auto &t : freq){
          if(t.second >= p)
         arr[t.first - 'a']++;
      }
      
      
      for ( int i = 0; i < 26; i++ ){
          if(arr[i] != 0){
              // it will print character that is first
              cout << char(i +'a') <<  endl;
              return 0;
          }
      }
}