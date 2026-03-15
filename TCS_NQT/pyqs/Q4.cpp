

// move zeros to end


#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    
    vector<int>arr(n);
    
    for( int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int start = 0;
    int end = arr.size() - 1;
    
    while(start < end){
           if( arr[start] != 0){
               start++;
           } 
           else if( arr[end] == 0){
               end--;
           }
           else {
           swap(arr[start], arr[end]);
            start++;
            end--;
           }
         }
         
    
      for( int i = 0; i < n-1; i++){
          cout << arr[i] << " ";
      }
      cout << arr[n-1];
}
