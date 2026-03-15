
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n];
    for( int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        ele = arr[i];
    }
    
    int ans  = 0;
    
    for( int i = 0; i < n-1; i++){
        ans = max(ans, arr[i] + arr[i+1]);
    }
    
    cout << ans;
}