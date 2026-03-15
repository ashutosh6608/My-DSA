

// no of duplicates



#include<bits/stdc++.h>
using namespace std;


int main(){
      string s;
      getline(cin ,s);
      stringstream ss(s);
      
      int num;
      vector<int>arr;
      
      while( ss >> num){
          arr.push_back(num);
      }
      
      unordered_map<int,int>freq;
      
      for( int i  = 0; i < arr.size(); i++){
           freq[arr[i]]++;
      }
      
      
      int count = 0;
      
      for( auto &c : freq){
          if( c.second > 1)
            count++;
      }
      
      cout << count;
}
