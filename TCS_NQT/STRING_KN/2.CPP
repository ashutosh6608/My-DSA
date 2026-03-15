
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool isPalindrome(string s){
        int st = 0;
        int end = s.size()-1;
        
        while( st < end){
            while( st < end && !isalnum(s[st])){
                    st++;
            } 
            
            while( st < end && !isalnum(s[end])){
                    end--;
            } 
            
            if(tolower(s[st]) != tolower(s[end])  ){
                return false;
            
            }
            st++;
            end--;
            
        }
        return true;
}



int main(){
     int T;
     cin >> T;
     cin.ignore();
     
     while(T--){
         string str;
         getline(cin,str);
         if(isPalindrome(str)){
             cout << "YES" << endl;
         }
         else {
             cout << "No" << endl;
         }
     }
}