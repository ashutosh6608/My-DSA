



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
    
    
   int freq = 0;
   int ans = 0;
   
   for ( int i = 0; i < n; i++){
       if(freq == 0 ){
           ans = arr[i];
       }
       if( ans == arr[i]){
            freq++;
       }
       else {
           freq--;
       }
   }
   
     int count = 0;
     
     for ( int i = 0; i < n; i++){
         if(arr[i] == ans)
         count++;
     }
     
     if( count > n/2){
         cout << ans << endl;
     }
     else {
         cout << "No Ans" << endl;
     }
     
}