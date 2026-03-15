



#include<bits/stdc++.h>
using namespace std;


int main(){
    
        int M;
        cin >> M;
        cin.ignore();
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
         
         sort(arr.begin(), arr.end());
         
         int minimum = INT_MAX;
         
         for( int i = 0,  j = M-1; j < arr.size(); i++,j++){
               int sub = arr[j] - arr[i];
               minimum = min(sub,minimum); 
         }
         
         cout << minimum;
         
         
         
}