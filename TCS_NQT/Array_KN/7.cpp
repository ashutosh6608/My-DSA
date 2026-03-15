
// minimum swap to bring less than together



#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    getline(cin,s);
    
    int k;
    cin >> k;
    
    stringstream ss(s);
    vector<int>arr;
    int num;
    
    while ( ss >> num){
         arr.push_back(num);
    }
    
    int n = arr.size();
    int bad = 0;
    
    int good = 0;
    for( int i = 0; i < n; i++){
        if(arr[i] < k){
            good++;
        }
    }
    
    
    
    for( int i = 0; i < good;i++){
        if( arr[i] >= k){
            bad++;
        }
    }
      int minSwaps = bad;
      
      for( int i = 0, j =  good; j < n; i++, j++){
            if( arr[i] >= k){
                bad --;
            }
            
            if(arr[j] >= k){
                bad++;
            }
            
            minSwaps = min(minSwaps, bad);
      }
      
      cout << minSwaps;
}
    
