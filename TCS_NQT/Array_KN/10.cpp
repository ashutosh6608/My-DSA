

/// Kth smallest and Kth largest element 



#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
      string s;
      getline(cin,s);
      
      int k;
      cin >> k;
      
      s.erase(remove(s.begin(), s.end(), '['), s.end());
      s.erase(remove(s.begin(), s.end(), ']'), s.end());
      
      
      stringstream ss(s);
      vector<int>arr;
      string num;
      
      while(getline( ss, num, ',')){
          num.erase(remove(num.begin(), num.end(), ' '), num.end());
          arr.push_back(stoi(num));
      }
      
      
      priority_queue<int> maxHeap;
      
      for( int i = 0; i < k; i++){
          maxHeap.push(arr[i]);
      }
      
      
      for( int i = k; i < arr.size(); i++){
          if( arr[i] < maxHeap.top()){
              maxHeap.pop();
              maxHeap.push(arr[i]);
          }
      }
      
      cout << maxHeap.top();
     
}





/// kth largest
 priority_queue<int,vector<int>,greater<int>>minHeap;
      
      
      for( int i = 0; i < k; i++){
          minHeap.push(arr[i]);
      }
 
 
   for( int i = k; i < arr.size(); i++){
       if( arr[i] > minHeap.top()){
           minHeap.pop();
           minHeap.push(arr[i]);
       }
   }
         cout << minHeap.top();
