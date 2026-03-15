
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

  
// [1 2 3 4 5]

int main(){
       string str;
       getline(cin, str);
       
       
       // remove brackets
       str.erase(remove(str.begin(), str.end(), '['), str.end());
       str.erase(remove(str.begin(), str.end(), ']'), str.end());
       
       stringstream ss(str);
        int word;
       vector<int>arr;
       
       
       while( ss >> word){
           arr.push_back(word);
       }
       
       for( int x : arr){
           cout << x << " ";
       }
       
}