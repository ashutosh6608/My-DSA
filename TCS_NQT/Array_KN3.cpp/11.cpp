
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
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
    
    
    int p;
    cin >> p;
    
    unordered_map<int,int>freq;
    
    
    for( int i = 0; i < arr.size(); i++){
        freq[arr[i]]++;
    }
    
    vector<int>ans;
    
    for( int i = 0; i < arr.size(); i++){
          ans.push_back(freq[i+1]);
    }
    
    
    for( int x : ans){
        cout << x << " ";
    }
    
   
   
}