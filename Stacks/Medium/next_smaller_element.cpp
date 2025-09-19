#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<long long> nextSmallerElement(vector<long long>& arr) {
    stack<int> st;
    vector<long long> ans(arr.size(), -1);

    for (int i = 0; i < arr.size(); i++) {
        while (!st.empty() && arr[st.top()] > arr[i]) {
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}

int main() {
    vector<long long> arr{9,8,7,6,5,4,3,2};
    vector<long long> ans = nextSmallerElement(arr);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
