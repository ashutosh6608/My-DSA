
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
    
    int n = arr.size();
    
    
    for( int i = 1; i < n-1; i++){
        bool leftSmall = true;
        bool rightGreater = true;
        
        
        for( int j  = 0; j < i; j++){
              if(arr[j] > arr[i]){
                    leftSmall = false;
                    break;
              }
        }
        
        for( int j = i+1; j < n; j++){
            if(arr[j] < arr[i]){
                rightGreater = false;
                break;
            }
        }
        
        if(leftSmall && rightGreater){
            cout << arr[i];
            return 0;
        }
    }
      cout << -1;
}