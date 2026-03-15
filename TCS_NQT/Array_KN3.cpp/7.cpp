
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

    // check empty array
    if(arr.empty()){
        cout<<"[]";
        return 0;
    }

    int n = arr.size();
    vector<int> ans;

    int maxi = arr[n-1];
    ans.push_back(maxi);

    for(int i=n-2;i>=0;i--){
        if(arr[i] > maxi){
            maxi = arr[i];
            ans.push_back(arr[i]);
        }
    }

    reverse(ans.begin(),ans.end());

    cout<<"[";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
        if(i != ans.size()-1){
            cout<<",";
        }
    }
    cout<<"]";

    return 0;
}