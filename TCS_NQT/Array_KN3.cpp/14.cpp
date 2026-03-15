#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int r;
    cin >> r;
    
    int unit;
    cin >> unit;
    cin.ignore();
  
    string s;
    getline(cin,s);

    // remove brackets
    s.erase(remove(s.begin(),s.end(),'['),s.end());
    s.erase(remove(s.begin(),s.end(),']'),s.end());

    stringstream ss(s);
    vector<int> arr;
    string num;

    // convert string to integers safely
    while(getline(ss,num,',')){
        num.erase(remove(num.begin(),num.end(),' '),num.end());

        if(num.empty()) continue;   // avoid stoi("") error

        arr.push_back(stoi(num));
    }
    
    
       if( arr.size() == 0){
             cout << "Array empty";
             return 0;
       }
       
       
       int mn = arr[0];
       int mx = arr[0];
       
       
       for( int i =1; i < arr.size(); i++){
           if( arr[i] < mn){
               mn = arr[i];
           }
           
           if( arr[i] > mx){
               mx = arr[i];
           }
       }
       cout << "[" << "Min=" << mn << ", Max=" << mx;
       return 0;
}