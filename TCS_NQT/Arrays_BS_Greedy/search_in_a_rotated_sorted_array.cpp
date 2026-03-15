#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int target;
    cin >> target;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int st = 0;
    int end = n - 1;
    
    while(st <= end){
        int mid = st + (end - st) / 2;
        
        if(arr[mid] == target){
            cout << mid;
            return 0;   // ✅ stop immediately
        }
        
        // Left part sorted
        if(arr[st] <= arr[mid]){
            if(arr[st] <= target && target < arr[mid]){
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }
        // Right part sorted
        else{
            if(arr[mid] < target && target <= arr[end]){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    
    cout << -1;   // target not found
}