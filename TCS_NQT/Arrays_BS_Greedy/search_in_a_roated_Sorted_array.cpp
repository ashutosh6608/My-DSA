#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int st = 0;
    int end = n - 1;
    
    while(st < end){
        int mid = st + (end - st) / 2;
        
        // Make mid even
        if(mid % 2 == 1){
            mid--;
        }
        
        if(arr[mid] == arr[mid + 1]){
            st = mid + 2;
        }
        else{
            end = mid;
        }
    }
    
    cout << arr[st];
}