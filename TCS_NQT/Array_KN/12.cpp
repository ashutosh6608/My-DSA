



#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
      string s;
      getline(cin,s);
      
     
      
      s.erase(remove(s.begin(), s.end(), '['), s.end());
      s.erase(remove(s.begin(), s.end(), ']'), s.end());
      
      
      stringstream ss(s);
      vector<int>arr1;
      string num;
      
      while(getline( ss, num, ',')){
          num.erase(remove(num.begin(), num.end(), ' '), num.end());
          arr1.push_back(stoi(num));
      }
      
      
   vector<int>ans;
   
   
   for( int i = 0; i < arr1.size(); i++){
        int count = 1;
        int j = i;
        
         while(j > 0 && arr1[j] >= arr1[j-1]){
               count++;
               j--;
               
         }
         ans.push_back(count);
            }
   
   for( int i = 0; i < ans.size(); i++){
       cout << ans[i] << " ";
   }
     
     
}




///////////////////////////////////////////////////////////////////
//////////// ALITER ///////////////



// using stack


#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin,s);

    s.erase(remove(s.begin(), s.end(), '['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());

    stringstream ss(s);
    vector<int> price;
    string num;

    while(getline(ss,num,',')){
        num.erase(remove(num.begin(),num.end(),' '),num.end());
        price.push_back(stoi(num));
    }

     int n = price.size();
     vettor<int>span(n);
     
     stack<int>st;
     
     
     for( int i = 0; i < n; i++){
         while(!st.empty() && price[st.top] <= price[i]){
             st.pop();
         }
         
         
         if(st.empty()){
             span[i] = i + 1;
         }
         else {
             span[i] = i - st.top();
         }
         
         st.push(i);
     }

    for(int x : span)
        cout << x << " ";
}