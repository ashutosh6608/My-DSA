



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    vector<string>arr;
    string num;
    
    
    while( ss >> num){
        arr.push_back(num);
    }
    
    map<int,int>leftCount;
    map<int,int>rightCount;
    
    for( string st: arr){
        int size = stoi(st.substr(0,st.size()-1));
        char side = st.back();
        
        if( side == 'L'){
            leftCount[size]++;
        }
        else{
            rightCount[size]++;
        }
    }
    
    int pair = 0;
    
    for( auto it : leftCount){
           int size = it.first;
           pair += min(leftCount[size], rightCount[size]);
    }
    
    
      cout << pair << endl;
    
}



////////////////////////////////////////////////////////////



#include<bits/stdc++.h>
using namespace std;

int main(){
     string s;
     getline(cin,s);
     
     stringstream ss(s);
     vector<int>arr;
     int num;
     
     while ( ss >> num){
         arr.push_back(num);
     }
     
     sort(arr.begin(), arr.end());
     int n = arr.size();
     
     int n1 = arr[n-1] * arr[n-2] * arr[n-3];
     int n2 = arr[0] * arr[1] * arr[n-1];
     
     int ans = max(n1,n2);
     
     cout << ans << endl;
}