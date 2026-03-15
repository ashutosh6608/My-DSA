


#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<pair<int,int>>uniquePairsWithSum(const vector<int>& arr, int target){
        vector<pair<int,int>>result;
        int left = 0;
        int right = arr.size() - 1;
        
        while( left < right){
            int sum = arr[left] + arr[right];
        
        
        if( sum == target){
            result.push_back({arr[left], arr[right]});
             left++;
            right--;
            
            while( left < right && arr[left] == arr[left+1]){
            left++;
            }
            
            while ( left < right && arr[right] == arr[right-1]){
            right--;
            }
        }
        
        else if( sum < target){
            left++;
        }
        else {
            right--;
          }
        }
        return result;
  }
  
  
  int main(){
      vector<int>arr{1,1,2,2,3,4,5,6};
      int target = 7;
      
      vector<pair<int,int>>pairs = uniquePairsWithSum(arr,target);
      
      for ( auto &p : pairs){
          cout << "(" << p.first << ", "  << p.second << ")" << endl;
      }
      return 0;
  }