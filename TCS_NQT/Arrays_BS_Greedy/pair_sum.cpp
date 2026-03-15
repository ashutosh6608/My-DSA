

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int>arr;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    
    int i = 0;
    int j = arr.size()-1;
    
    vector<int>ans;
    
    while( i < j){
        if(arr[i] + arr[j] == target){
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            i++;
            j--;
        }
        else if(arr[i] + arr[j] < target){
            i++;
        }
        else {
            j--;
        }
    }
       
    for ( int i = 0; i <= 1; i++){
          cout << ans[i] << " ";
    }
}