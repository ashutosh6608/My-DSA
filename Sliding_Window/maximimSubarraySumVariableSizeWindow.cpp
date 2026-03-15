
// Kadane Algorithm

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxSubArraySumKadane(vector<int>arr, int n){
    int currSum = arr[0];
    int maxSum = arr[0];
    
    for ( int i = 1; i < n; i++){
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}



pair<int,vector<int>> maxSubArrayKadane(vector<int>arr, int n){
    int currSum = arr[0];
    int maxSum = arr[0];
    
    int start = 0;
    int tempStart = 0;
    int end  = 0;
    
    for ( int i = 1; i < n; i++){
        if(arr[i] > currSum + arr[i]){
            currSum = arr[i];
            tempStart = i;
        }
        else {
            currSum += arr[i];
        }
        
        if( currSum > maxSum){
            maxSum = currSum;
            start = tempStart;
            end = i;
        }
    }
    
    vector<int>subArray;
    for ( int i = start; i <= end; i++){
        subArray.push_back(arr[i]);
    }
        return {maxSum, subArray};
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
    
    int res = maxSubArraySumKadane(arr,n);
    cout << res << endl;
}