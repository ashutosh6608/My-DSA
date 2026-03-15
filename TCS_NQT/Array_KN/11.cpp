

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
      string s;
      getline(cin,s);
      
     
      
      s.erase(remove(s.begin(), s.end(), '['), s.end());
      s.erase(remove(s.begin(), s.end(), ']'), s.end());
      
      
      stringstream ss(s);
      vector<int>arr1;
      string num;
      
      while(getline( ss, num, ',')){
          num.erase(remove(num.begin(), num.end(), ' '), num.end());
          arr1.push_back(stoi(num));
      }
      
      
      
      string s1;
      getline(cin,s1);
      
     
      
      s1.erase(remove(s1.begin(), s1.end(), '['), s1.end());
      s1.erase(remove(s1.begin(), s1.end(), ']'), s1.end());
      
      
      stringstream nss(s1);
      vector<int>arr2;
      string eenum;
      
      while(getline( nss, eenum, ',')){
          eenum.erase(remove(eenum.begin(), eenum.end(), ' '), eenum.end());
          arr2.push_back(stoi(eenum));
      }
      
      
      int n = arr1.size();
      
      sort(arr1.begin(), arr1.end());
      sort(arr1.begin(), arr1.end());
      
      
      int i = 0;
      int j = 0;
      
      int platforms = 0;
      int maxplatforms = 0;
      
      
      while ( i < n && j < n){
          if( arr1[i] <= arr2[j]){
              platforms++;
              maxplatforms = max(maxplatforms,platforms);
              i++;
          }
          else {
              platforms--;
              j++;
          }
      }
      
       cout << "minimum number of platforms " << maxplatforms;
     
}