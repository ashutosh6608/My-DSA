

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    long long num = 0;
    long long sum = 0;


    for( char ch : str){
          if(isdigit(ch)){
            num = num*10 + (ch - '0');
          }
          else {
              sum += num;
              num = 0;
          }
    
        }
        sum += num;
        cout << sum << endl;
    }