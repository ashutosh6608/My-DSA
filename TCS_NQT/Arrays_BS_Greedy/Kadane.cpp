

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int>arr;
    
    for( int i = 0; i < n; i++){
          int num;
          cin >> num;
          arr.push_back(num);
    }
    
     int maxSum = INT_MIN;
     int sum = 0;
     
     for ( int i = 0; i < n; i++){
         sum += arr[i];
          maxSum = max(maxSum, sum);
          if( sum < 0)
            sum = 0;
     }
      cout << maxSum;
}