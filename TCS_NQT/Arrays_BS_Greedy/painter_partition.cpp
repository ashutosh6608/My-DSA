

#include<bits/stdc++.h>
using namespace std;


bool isPossible(vector<int>&arr, int n, int m, int maxAllowdedTime){
    int painters = 1;
    int time = 0;
    
    for ( int i = 0; i < n; i++){
        if(time + arr[i] <= maxAllowdedTime){
            time += arr[i];
        } else {
            painters++;
            time = arr[i];
        }
    }
    return painters <= m;
}


int main(){
         int n;
         int m;
         cin >> n;
         cin >> m;
         
         vector<int>arr(n);
         
         for ( int i = 0; i < n; i++){
             cin >> arr[i];
         }
         
         int st = 0;
         int ans = -1;
        for ( int i = 0; i < n; i++){
               st = max(st,arr[i]);
        }
        
        int end = accumulate(arr.begin(), arr.end(),0);
        
        
        while( st <= end){
              int mid = st + (end - st)/2;
              if(isPossible(arr,n,m,mid)){
                  ans = mid;
                  end = mid-1;
              }
              else {
                  st = mid + 1;
              }
        }
        
        cout << ans;
}