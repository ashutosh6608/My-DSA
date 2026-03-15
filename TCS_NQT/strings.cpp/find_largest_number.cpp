
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin , s);
    
    
    long long maxNum = -1;
    string current = "";
    
    for ( int i = 0; i <= s.size(); i++){
        if( i < s.size() && isdigit(s[i])){
            current += s[i];
        }
        else {
            if( current.size() > 0){
                 if( current.find('9') == string :: npos){
                     long long num = stoll(current);
                     maxNum = max(maxNum,num);
                 }
                 current = "";
            }
        }
    }
    if(maxNum == -1)
        cout << "No valid number found";
    else
        cout << maxNum;
}