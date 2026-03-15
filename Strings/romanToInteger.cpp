
#include<bits/stdc++.h>
using namespace std;

int num(char c){
    if( c == 'I')
    return 1;
     if( c == 'V')
    return 5;
     if( c == 'X')
    return 10;
     if( c == 'L')
    return 50;
     if( c == 'C')
    return 100;
     if( c == 'D')
    return 500;
    else
    return 1000;
}

int main(){
      string s;
      cin >> s;
      int index = 0;
      int sum = 0;
      
      while(index < s.size()-1){
            if(num(s[index]) < num(s[index+1])){
                sum -= num(s[index]);
            }
            else{
                sum += num(s[index]);
            }
            index++;
      }
        sum += num(s[s.size()-1]);
        cout << sum << endl;;
}