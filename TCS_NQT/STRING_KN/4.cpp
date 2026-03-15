
// largest integer without 9

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    string str;
    getline(cin,str);
    
    string current = "";
    long long maxNum = -1;
    
    
    for ( int i = 0; i < str.size(); i++){
        if(i < str.size() && isdigit(str[i])){
            current += str[i];
        }
        else {
            if( current.size() > 0){
                if(current.find('9') == string :: npos){
                    long long num = stoll(current);
                    maxNum = max(num,maxNum);
                }
                current = "";
            }

        }
    }

     if(current.size() > 0){
        if(current.find('9') == string::npos){
            long long num = stoll(current);
            maxNum = max(num, maxNum);
        }
    }
    
    cout << maxNum;
    
}