


#include<bits/stdc++.h>
using namespace std;

/// INPUT OF BRACKET TYPE [2,3,4,5];

int main(){
    string line;
    getline(cin,line);
    
    line.erase(remove(line.begin(), line.end(), '['), line.end());
    line.erase(remove(line.begin(), line.end(), ']'), line.end());
    
    stringstream ss(line);
    vector<int>arr;
    string token;
    
    while(getline(ss,token, ',')){
        token.erase(remove(token.begin(), token.end(), ' '), token.end());
        arr.push_back(stoi(token));
    }
    
     for (int v : arr)
        cout << v << " ";

}