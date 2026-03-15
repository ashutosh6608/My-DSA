

#include<bits/stdc++.h>
using namespace std;

int main(){
       int n;
       cin >> n;
       
       vector<int>arr(n);
       
       for ( int i = 0; i < n; i++){
           cin  >> arr[i];
       }
       
       
       int start = 0;
       int mid = 0;
       int end = n-1;
       
       while( mid <= end){
            if(arr[mid] == 0){
                swap(arr[start], arr[mid]);
                start++;
                mid++;
            }   else if(arr[mid] == 1){
                mid++;
            }  else {
                 swap(arr[mid], arr[end]);
                 end--;
                
            }
       }
         for ( int i = 0 ; i < n; i++){
             cout << arr[i] << " ";
         }
}