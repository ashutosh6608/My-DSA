
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
      int num;
      
      while(ss >> num){
          arr.push_back(num);
      }
        int profit = 0;
        int buy = arr[0];
      
      for( int i = 1; i < arr.size(); i++){
            if( arr[i] > buy ){
                profit = max(profit, arr[i]-buy);
            }
             else {
                     buy = arr[i];
             }
      }
      cout << profit << endl;
}