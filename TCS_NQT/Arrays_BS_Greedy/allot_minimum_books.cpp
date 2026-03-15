


#include<bits/stdc++.h>
using namespace std;



bool isPossible(vector<int> &arr, int n, int m, int allowed){
    int stu = 1;
    int pages = 0;
    
    
    for ( int i = 0; i < n; i++){
        if( pages + arr[i] <= allowed){
            pages += arr[i];
        } else{
            stu++;
            pages = arr[i];
        }
    }
      return stu <= m;
}





int main(){
      int n , m;
      cin >> n >> m;
      
      vector<int>arr(n);
      for ( int i = 0; i < n;i++){
          cin >> arr[i];
      }
      
      if( m < n){
          cout << -1;
          return 0;
      }
      
      int sum = accumulate(arr.begin(), arr.end(), 0);
      int st = *max_element(arr.begin(), arr.end());
      
      
      int end = sum;
      int ans = -1;
        

      int mid = st + (end - st)/2;
      
      while( st <= end){
            if(isPossible(arr,n,m,mid)){
                ans = mid;
                st = mid-1;
            }  else {
                st = mid+1;
            }
      }
      cout << ans;
}