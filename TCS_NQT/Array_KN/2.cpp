

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
      int N;
      cin >> N;
      
      vector<int>arr;
      for( int i = 0; i < N; i++){
          int ele;
          cin >> ele;
           arr.push_back(ele);
      }
      
      int maxNum = 0;
      int count = 0;
      
      for( int i = 0; i < N; i++){
           if( arr[i] > maxNum){
               count++;
           } 
           maxNum = max(maxNum,arr[i]);
      }
      
      
      cout << count;
}