#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){
      vector<vector<int>> result;
      int n = nums.size();
      
      if( n < 3){
          cout << "Invalid array" << endl;
      }
      
      sort(nums.begin(), nums.end());
      
      for ( int i = 0; i < n-2; i++){
          if( i > 0 && nums[i] == nums[i-1]) continue;
          
          int left = i+1;
          int right = n-1;
          
          while ( left < right){
              int sum = nums[i] + nums[left] + nums[right];
              
              if( sum == 0){
                  result.push_back({nums[i], nums[left], nums[right]});
                  
                  // skip duplicates
                  while( left < right && nums[left] == nums[left+1])left++;
                  while ( left < right && nums[right] == nums[right - 1]) right--;
                  
                  left++;
                  right--;
                  
              }
              else if(sum < 0){
                  left++;
              }
              else {
                  right--;
              }
          }
      }
      return result;
}

int main(){
    int n;
    cin >> n;
    
    vector<int>arr;
    
    for ( int i = 0; i < n; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    
    vector<vector<int>> ans = threeSum(arr);
    
   for (auto &triplet : ans) {
        for (int x : triplet) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}