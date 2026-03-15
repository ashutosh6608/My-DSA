

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
        string s;
        getline(cin,s);
        
        s.erase(remove(s.begin(), s.end(), '['), s.end());
        s.erase(remove(s.begin(), s.end(), ']'), s.end());
        
        stringstream ss(s);
        vector<int>arr;
        string num;
        
        
        while(getline(ss,num, ',')){
              num.erase(remove(num.begin(), num.end(), ' '), num.end());
              arr.push_back(stoi(num));
        }
        
         int i = 0;
         int j = arr.size()-1;
         
         while( i < j){
             if( arr[i] != 0){
                  i++;
             }
             else if( arr[j] == 0){
                 j--;
             }
             
             else {
                 swap(arr[i], arr[j]);
                 i++;
                 j--;
             }
             
         }
        cout << "[";

  for(int i = 0; i < arr.size(); i++){
    
    cout << arr[i];
    
    if(i != arr.size()-1){
        cout << ",";
    }
}

cout << "]";
         
        
}