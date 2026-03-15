
#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
     string s;
     getline(cin,s);
     
     
     string key;
     getline(cin,key);
     
     if(key.size() > s.size()){
         cout << "False" << endl;
         return 0;
     }
     
     
     vector<int>freq1(26,0);
     vector<int>freq2(26,0);
     
     for( int i = 0; i < key.size(); i++){
         freq1[s[i] - 'a']++;
         freq2[key[i] - 'a']++;
     }
     
     if(freq1 == freq2){
         cout << "Yes" << endl;
         return 0;
     }
     
     for( int i = key.size(); i < s.size(); i++){
           freq1[s[i]-'a']++;
           freq1[s[i - key.size()] - 'a']--;
           
           if(freq1 == freq2){
               cout << "Yes" << endl;
               return 0;
           }
     }
       cout << "No" << endl;
}
