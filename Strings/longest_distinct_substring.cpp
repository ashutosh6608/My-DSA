#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    
    vector<bool>digit(256,0);
    int len = 0; 
    int first = 0;
    int second = 0;
    
    
    while(second < s.size()){
        while(digit[s[second]]){
            digit[s[first]] = 0;
            first++;
        }
          digit[s[second]] = 1;
          len = max(len,second-first+1);
          second++;
    }
    cout << len;
}