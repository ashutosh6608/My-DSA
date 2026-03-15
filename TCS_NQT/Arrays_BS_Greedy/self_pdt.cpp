

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
         
         
         vector<int>ans(n,1);
        
         
         
         // prefix
         for ( int i = 1; i < n; i++){
             ans[i] = ans[i-1] * arr[i-1];
         }
         
         int suffix = 1;
         
         for ( int i = n-2; i >= 0; i--){
             suffix *= arr[i+1];
             ans[i] *= suffix;
         }
         
  
         
         for ( int i = 0; i < n; i++){
             cout << ans[i] << " ";
         }
  }