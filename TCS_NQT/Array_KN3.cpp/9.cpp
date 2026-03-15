
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
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
    
    
    string s1;
    getline(cin,s1);

    // remove brackets
    s1.erase(remove(s1.begin(),s1.end(),'['),s1.end());
    s1.erase(remove(s1.begin(),s1.end(),']'),s1.end());

    stringstream ess(s1);
    vector<int> arr1;
    string num1;

    // convert string to integers safely
    while(getline(ess,num1,',')){
        num1.erase(remove(num1.begin(),num1.end(),' '),num1.end());

        if(num1.empty()) continue;   // avoid stoi("") error

        arr1.push_back(stoi(num1));
    }
    
    
    unordered_map<int,int>freq;
    
    for( int i = 0; i < arr.size(); i++){
             freq[arr[i]]++; 
    }
    
    for( int i = 0; i < arr1.size(); i++){
           freq[arr1[i]]++;
    }
    
    int count = 0;
    
    for( auto x : freq){
        if(x.second == 2){
            count++;
        }
    }

      cout << count;
}