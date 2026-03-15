
#include<bits/stdc++.h>
using namespace std;


int main(){
     string s;
     getline(cin,s);
     
     vector<int>count(256,0);
     
     
     int diff = 0;
     
     
     for ( int i = 0; i < s.size(); i++){
         if(count[s[i]] == 0)
         diff++;
         count[s[i]]++;
     }
     
     fill(count.begin(), count.end(), 0);
     
     
     int first = 0;
     int second = 0;
     int len = INT_MAX;
     
     
     while(second < s.size()){
            if(count[s[second]] == 0 )
            diff--;
            
            count[s[second]]++;
            second++;
            
            
            while( diff == 0){
                  len = min(second-first, len);
                  count[s[first]]--;
                  
                  if(count[s[first]] == 0)
                  diff++;
                  
                  first++;
            }
     }
     cout << len;
}