


#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    getline(cin,s1);
    
    string s2;
    getline(cin,s2);
    
    
    string ans = "";
    
    int i = 0;
    int j = 0;
    
    
   while ( i < s1.size() && j < s2.size()){
            ans += s1[i];
            ans += s2[j];
            i++;
            j++;
   }
   
   if( i < s1.size()){
       ans += s1.substr(i);
   }
   
    if( j < s2.size()){
       ans += s2.substr(j);
   }
   
     cout << ans;
    
    
}