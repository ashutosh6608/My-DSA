

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
         
         while(getline ( ss, num, ',')){
              num.erase(remove(num.begin(), num.end(), ' '), num.end());
              arr.push_back(stoi(num));
         }
         
         int n = arr.size();
         int i = 0;
         int j = 1;
         
         int water = 0;
         int sum = 0;
         
        
        while ( i < n && j < n){
              if( arr[i] == 0){
                  i++;
                  j = i + 1;
                  continue;
              }
              
                if( arr[j] == 0){
                  j++;
                  continue;
              }
              
            
                   int water = min(arr[i],arr[j]) * (j-i);
                     sum += water;
                  
             
              
                  i = j;
                   j = j + 1;  
        }
         
         cout << sum; 
         
}