

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t1,t2;
    cin >> s >> t1 >> t2;
    
    
    int n = s1.size();
    int l1 = t1.size();
    int l2 = t2.size();
    
    vector<int>firstPos;
    vector<int>endPos;
    
    for( int i = 0; i <= n-l1; i++){
        if(s.substr(i,l1) == t1){
            firstPos.push_back(i);
        }
    }
    
    for( int i = 0; i <= n-l2; i++){
        if(s.substr(i,l2) == t2){
            endPos.push_back(i+l2-1);
        }
    }
        
        set<string>st;
        
        for( int i : firstPos){
            for( int j : endPos){
                 if( j >= i+l1-1){
                     st.insert(s.substr(i,j-i+1));
                 }
            }
        }
        
      cout << st.size();
}