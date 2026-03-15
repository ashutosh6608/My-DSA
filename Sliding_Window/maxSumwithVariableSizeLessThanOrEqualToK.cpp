


#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int maxSubarraySumVARIABLE(vector<int>arr, int n, int k){
    int left = 0;
    int sum = 0;
    int maxSum = 0;
    
    for ( int right = 0; right < n; right++){
        sum += arr[right];
        
        while( sum > k){
            sum -= arr[left];
            left++;
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}



pair<int, vector<int>> maxSubarraySumVariable(int arr[], int n, int k) {
    int left = 0, sum = 0, maxSum = 0;
    int start = 0, end = 0;

    for (int right = 0; right < n; right++) {
        sum += arr[right];

        while (sum > k) {
            sum -= arr[left];
            left++;
        }

        if (sum > maxSum) {
            maxSum = sum;
            start = left;
            end = right;
        }
    }

    vector<int> subarray;
    for (int i = start; i <= end; i++)
        subarray.push_back(arr[i]);

    return {maxSum, subarray};
}





int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;

   vector<int>arr;

   for ( int i = 0; i < n; i++){
       int num;
       cin >> num;
       arr.push_back(num);
   }
    
   

   int ans =  maxSubarraySumVARIABLE(arr,n,k);
   cout << ans << endl;
   
}