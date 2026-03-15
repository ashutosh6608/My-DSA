

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    
// COMMA SEPARATED ARRAY   1,2,3,4

int main(){
    string s;
    getline(cin,s);
    
    stringstream ss(s);
    vector<int>arr;
    string token;
    
    while( getline(ss,token, ',')){
token.erase(remove(token.begin(), token.end(), ' '), token.end());
        arr.push_back(stoi(token));
    }
}

for ( int v : arr){
    cout << v << " ";
}


