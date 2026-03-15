




#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string ransomNote;
    getline(cin,ransomNote);
    
    string magazine;
    getline(cin, magazine);
    
    unordered_map<char,int> freq;
    unordered_map<char,int> freq1;
    
    for(char c : ransomNote)
        freq[c]++;
    
    for(char c : magazine)
        freq1[c]++;
    
    bool ans = true;
    
    for(auto p : freq){
        if(freq1[p.first] < p.second){
            ans = false;
            break;
        }
    }
    
    if(ans)
        cout << "true";
    else
        cout << "false";
}