

#include<iostream>
#include<bits/stdc++h>
using namespace std;




bool isPossible(vector<int>arr, int n, int m, int minAllowedDistance){
         int cows = 1;
         lastStallPos = arr[0];
         
        for ( int i = 1; i < N; i++){
            if(arr[i] - lastStallPos >= mid){
                cows++;
                lastStallPos = arr[i];
            }
            if( cows == m){
                return true;
            }
        }
        return false;
}


int main(){
    int n;
    cin >> n;
    
       
    int m;
    cin >> m;
    
    vector<int>arr;
    int ans = 0;
    
    for( int i = 0; i < n; i++){
           cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    int st = 0;
    int end = arr[n-1] - arr[0];
    
    while( st <= end){
        if( isPossible(arr,n,m,mid)){
              ans = mid;
              st = mid + 1;
        }
        else {
            end = mid-1;
        }
    }
        
      cout << ans;
}