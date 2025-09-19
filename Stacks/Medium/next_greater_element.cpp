#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<long long> nextLargerElement(vector<long long>&arr){
       stack<int>st;
       
       vector<long long> ans(arr.size(),-1);

       for ( int i = 0; i < arr.size(); i++){
        while(!st.empty() && arr[st.top()] < arr[i]){
            
            ans[st.top()] = arr[i];
            st.pop();   
        }
        // jab tak bada rhega arr[i] tab tak aise hoga
                st.push(i) ;
       }
          return ans;
}


int main() {
    vector<long long> arr{2,5,4,6,1,7,8,2,9};
    
    vector<long long>ans = nextLargerElement(arr);
    for ( int i = 0 ; i < ans.size() ; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}