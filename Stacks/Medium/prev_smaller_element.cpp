#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<long long> prevSmallerElement(vector<long long>& arr) {
    stack<int> st;
    vector<long long> ans(arr.size(), -1);

    for (int i = arr.size()-1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] > arr[i]) {
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}

int main() {
    vector<long long> arr{2,5,8,3,4,9,5};
    vector<long long> ans = prevSmallerElement(arr);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
