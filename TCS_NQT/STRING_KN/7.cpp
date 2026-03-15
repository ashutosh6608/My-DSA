
// isomorphic strings

#include<iostream>
#inclue<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    getline(cin,s1);
    
    string s2;
    getline(cin,s2);
    
    if(s1.size() != s2.size()){
        cout << "0";
        return 0;
    }
    
    vector<int>m1(256,-1);
    vector<int>m2(256,-1);
    
    for( int i = 0; i < m1.size(); i++){
        if(m1[s1[i]] != m2[s2[i]]){
            cout << "0";
            return 0;
        }
        
        m1[s1[i]] = i;
        m2[s2[i]] = i;
    }
      cout << "1";
}