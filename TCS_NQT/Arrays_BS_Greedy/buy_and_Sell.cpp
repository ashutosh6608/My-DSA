

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int>arr;
    
    for ( int i = 0; i < n; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    
    int bestBuy = arr[0];
    int ans = 0;
    
    for ( int i = 0; i < n; i++){
        if( arr[i] > bestBuy){
            ans = max(ans, arr[i] - bestBuy );
        }
         bestBuy = min(arr[i], bestBuy);
    }
    
    cout << ans;
}