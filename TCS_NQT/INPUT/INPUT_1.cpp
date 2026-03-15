

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// SPACE SEPARATED ARRAY


int main(){
    string line;
    getline(cin,line);
    
    stringstream ss(line);
    vector<int>arr;
    int x;
    
    while( ss >> x){
        arr.push_back(x);
    }
    
    for( int v: arr){
        cout << v << " ";
    }
    
}