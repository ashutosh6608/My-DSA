
// pivot index


#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    
    vector<int>arr(n);
    
    for( int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int sum = 0;
    
    for( int i = 0; i < n; i++){
        sum += arr[i];
    }
    
    
    int leftSum = 0;
  
    
    for( int i = 0; i < n; i++){
        int rightSum = totalSum - leftSum - arr[i];
        
        if(leftSum == rightSum){
            cout << i;
            return 0;
        }
        
        leftSum += arr[i];
    }
    
     cout << -1;
}