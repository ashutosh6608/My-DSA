


#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int maxSubarraySumFixed(int arr[], int n, int k){
    int windowSum = 0;
    int maxSum = INT_MIN;
    
    for ( int i = 0; i < n; i++){
        windowSum += arr[i];
        
        if( i >= k - 1){
            maxSum = max(maxSum, windowSum);
            windowSum -= arr[i-(k-1)];
        }
    }
       return maxSum;
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
    
   int k = 3;

   int ans =  maxSubarraySumFixed(arr,n,k);
    return ans;
}