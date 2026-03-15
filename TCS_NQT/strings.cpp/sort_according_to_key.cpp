

#include<bits/stdc++.h>
using namespace std;



int main(){
    string str;
    getline(cin, str);
    
    string key;
    getline(cin,key);
    
    string ans = "";
    
    vector<int>alpha(26);
    
    for ( int i = 0; i < str.size(); i++){
          alpha[str[i]-'a']++;
    }
    
    for ( int i = 0; i < key.size(); i++){
          while(alpha[key[i] - 'a']){
               ans += key[i];
            alpha[key[i] - 'a']--;
          }
    }
    
    cout << ans;
}