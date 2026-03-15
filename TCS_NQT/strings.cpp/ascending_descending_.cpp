

#include<bits/stdc++.h>
using namespace std;


int main(){
   
   string str;
   getline(cin, str);
   
   stringstream ss(str);
   string word;
   
   set<string>words;
   
   
   while( ss >> word){
        words.insert(word);
   }
   
   
   for ( auto &w : words){
       cout << w << " ";
   }
   cout << endl;
   
   for ( auto it = words.rbegin(); it != words.rend(); it++){
         cout << *it << " ";
   }
   return 0;
}  