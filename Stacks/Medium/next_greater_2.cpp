#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElements(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, -1);
    stack<int> st;

    // Traverse twice for circular behavior
    for (int i = 0; i < 2 * n; i++) {
        int idx = i % n;

        while (!st.empty() && nums[st.top()] < nums[idx]) {
            ans[st.top()] = nums[idx];
            st.pop();
        }
        if (i < n) {
            st.push(idx);
        }
    }
    return ans;
}

int main() {
    vector<int> nums{2, 5, 4, 6, 1, 7, 8, 2, 9};

    vector<int> ans = nextGreaterElements(nums);

    cout << "Next Greater Element II: ";
    for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
