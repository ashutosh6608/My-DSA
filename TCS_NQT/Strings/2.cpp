
// smallest ddistinct window


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    getline(cin,s);
    
    set<char>st(s.begin(), s.end());
    vector<int>freq(256,0);
    int distinct = st.size();
    
    int first =0;
   
    int count = 0;
    int len = INT_MAX;
    
    for( int i = 0; i < s.size();i++){
          freq[s[i]]++;
          if(freq[s[i]] == 1){
              count++;
          }
          
          while(count == distinct){
                len = min(len,i-first+1);
                freq[s[first]]--;
                if(freq[s[first]] == 0){
                    count--;
                }
                first++;
          }
    }
    cout << minLen;
}