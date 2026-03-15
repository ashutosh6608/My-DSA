
#include<bits/stdc++.h>
using namespace std;

  void anticlockwise(string &s){
        int n = s.size();
        int index = 1;
        char c = s[0];
        while ( index < s.size()){
            s[index-1] = s[index];
            index++;
        }
        s[index-1] = c;
     
  }
  
  
  void clockwise(string &s){
      int n = s.size();
      int index = n-1;
      char c = s[n-1];
      while ( index > 0){
          s[index] = s[index-1];
          index--;
      }
      s[0] = c;
      
      
  }

int main(){
    string s1;
    getline(cin,s1);
    
    string s2;
    getline(cin,s2);
    int k;
    cin >> k;
    
    string original = s1;
    
    
if( s1.size() != s2.size()){
    cout << "Both string cannot be rotation of each other" << endl;
    return 0;
}
 
 int times = k % (s1.size());
  if(times == 0){
        if(s1 == s2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        return 0;
    }
 int ans = 0;
 
 for ( int i = 0; i < times; i++){
     clockwise(s1);
     if( s1 == s2){
    ans = 1;
     }
 }
 
 s1 = original;
 
 for ( int i = 0; i < times; i++){
     anticlockwise(s1);
     if( s1 == s2){
         ans = 1;
     }
 }
    
          if( ans == 1){
              cout << "Yes" << endl;
          }
          else {
              cout << "No" << endl;
          }
    

}