

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; 
    cin >> n;
    
    vector<int>arr(n);
    
    for ( int i = 0; i < n; i++){
          cin >> arr[i];
    }
    
    unordered_map<int,int>freq;
    
    for ( int num : arr){
        freq[num]++;
    }
    
    for ( int i = 0; i < n; i++){
          arr[i] = freq[arr[i]];
    }
    
    for ( int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
}