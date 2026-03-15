
#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    getline(cin,s);
    
    set<char>letters;
    
    for ( char ch : s){
        if(isalpha(ch)){
            letters.insert(tolower(ch));
        }
    }
    
    string missing = "";
    
    for ( char ch = 'a' ; ch <= 'z'; ++ch){
        if(letters.find(ch) == letters.end()){
            missing += ch;
        }
    }
        if (missing.empty()) 
           cout << 0 << endl; 
        else 
           cout << missing << endl; 
           
     return 0; 
}