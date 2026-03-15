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
    
    
       if( arr.size() ==  0)
       return -1;
       
       
       int foodNeeded = r * unit;
       int foodCollected = 0;
       
       for( int i = 0; i < arr.size(); i++){
             foodCollected += arr[i];
             if( foodCollected >= foodNeeded){
                 cout << i+1;
                 return 0;
             }
       }
       cout << 0;
       return 0;
}