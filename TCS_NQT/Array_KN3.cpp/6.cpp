

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
        string s;
        getline(cin,s);
        
        s.erase(remove(s.begin(), s.end(), '['), s.end());
        s.erase(remove(s.begin(), s.end(), ']'), s.end());
        
        stringstream ss(s);
        vector<int>arr;
        string num;
        
        
        while(getline(ss,num, ',')){
              num.erase(remove(num.begin(), num.end(), ' '), num.end());
              arr.push_back(stoi(num));
        }
        
        int count = 0;
        int maxCount = 0;
        
         for( int i = 0 ; i < arr.size(); i++){
              if(arr[i] == 1){
                  count++;
                  maxCount = max(count,maxCount);
              }
              else {
                   count = 0;
              }
         }
          cout << maxCount;
}