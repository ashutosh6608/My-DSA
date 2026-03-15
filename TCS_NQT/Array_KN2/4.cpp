
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//       string s1;
//       string s2;
      
//       getline(cin,s1);
//       getline(cin,s2);
      
//       s1.erase(remove(s1.begin(), s1.end(), '['), s1.end());
//       s1.erase(remove(s1.begin(), s1.end(), ']'),s1.end());
      
      
//       s2.erase(remove(s2.begin(), s2.end(), '['), s2.end());
//       s2.erase(remove(s2.begin(), s2.end(), ']'),s2.end());
      
      
//       stringstream ss(s1);
//       vector<int>arr1;
//       string num1;
      
      
//       stringstream sss(s2);
//       vector<int>arr2;
//       string num2;
      
//       while(getline(ss,num1,',')){
//               num1.erase(remove(num1.begin(), num1.end(), ' '), num1.end());
//               arr1.push_back(stoi(num1));
//       }
      
      
//       while(getline(sss,num2,',')){
//               num2.erase(remove(num2.begin(), num2.end(), ' '), num2.end());
//               arr2.push_back(stoi(num2));
//       }
      
//       unordered_map<int,int>freq;
      
//       for( int i = 0; i < arr1.size(); i++){
//             freq[arr1[i]]++;
//       }
      
//       for( int i = 0; i < arr2.size(); i++){
//             freq[arr2[i]]++;
//       }
      
      
//       cout << freq.size() << endl;
      
// }






#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin >> n;
        
     if( n <= 1){
           cout << 0;
           return 0;
     }   
     
     if( n <= 3){
           cout << 1;
           return 0;
     }
     
     if( n % 2 == 0 || n % 3 == 0){
         cout << 0;
         return 0;
     }
     
     for( int i = 5; i * i <= n; i+=6){
         if(n % i == 0 || n % (i+2) == 0){
             cout <<  1;
             return 0;
         }
     }
     
     cout << 1;
        
            
        
}