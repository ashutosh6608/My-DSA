#include<bits/stdc++.h>
using namespace std;


int main(){
      string s1;
      
      
      getline(cin,s1);
   
      
      s1.erase(remove(s1.begin(), s1.end(), '['), s1.end());
      s1.erase(remove(s1.begin(), s1.end(), ']'),s1.end());
     
      
      stringstream ss(s1);
      vector<int>arr1;
      string num1;
      
      while(getline(ss,num1,',')){
              num1.erase(remove(num1.begin(), num1.end(), ' '), num1.end());
              arr1.push_back(stoi(num1));
      }
      
        int maxEle = *max_element(arr1.begin(), arr1.end());
        int minEle = *min_element(arr1.begin(), arr1.end());
      
      
     cout << minEle << " " << maxEle << endl;
}

