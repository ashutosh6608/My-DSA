
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
      int n;
      cin >> n;
      
      
      int count = 0;
      
      vector<int>arr(n);
      
      for( int i = 0; i < n; i++){
          cin >> arr[i];
      }
      
      unordered_map<int,int>freq;
      
      for( int i = 0; i < n; i++){
          freq[arr[i]]++;
      }
      
      
      
      
     
      cout << freq.size();
}