

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
    
    
    int maxwater = 0;
    int lp = 0;
    int rp = n-1;
    
    while( lp < rp){
          int w = rp-lp;
          int height = min(arr[lp], arr[rp]);
          int water = w * height;
           maxwater = max(water, maxwater);
           arr[lp] < arr[rp] ? lp++ : rp--;
    }
    cout << maxwater;
}