#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int>stockSpanProblem(vector<int>&nums){
    stack<int>st;
    vector<int>ans(n);

    for (int i = nums.size() - 1; i >= 0; i--){

        while(!st.empty() && nums[st.top] < nums[i]){
              ans[st.top()] = st.top() - i;
              st.pop();
        }

          st.push(i);
    }

    while(!st.empty)(){
        ans[st.top()] = st.top() + 1;
        st.pop()
    }

    return ans;
} 


int main() {
    vector<int>nums = {100,80,55,70,60,75,85};
    vector<int>ans1 = stockSpanProblem(nums);
    for ( int i = 0 ; i < ans1.size(); i++){
        cout << ans1[i] << " ";
    }
    cout << endl;
    return 0;

}