#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  
    string s;
    getline(cin,s);

    // remove brackets
    s.erase(remove(s.begin(),s.end(),'['),s.end());
    s.erase(remove(s.begin(),s.end(),']'),s.end());

    stringstream ss(s);
    vector<int> arr;
    string num;

    // convert string to integers safely
    while(getline(ss,num,',')){
        num.erase(remove(num.begin(),num.end(),' '),num.end());

        if(num.empty()) continue;   // avoid stoi("") error

        arr.push_back(stoi(num));
    }
    
    
    int k;
    cin >> k;
    
    int n = arr.size();
    
    
     sort(arr.begin(), arr.end());
     
     long long sum = 0;
     int l = 0;
     int ans = 1;
     
     
     for( int r = 0; r < arr.size(); r++){
         sum += arr[r];
         
         while((long long) arr[r] * (r-l+1) - sum > k){
             sum -= arr[l];
             l++;
         }
         ans = max(ans,r-l+1);
     }
     cout << ans;
}