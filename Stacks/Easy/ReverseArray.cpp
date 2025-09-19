#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> reverseVector(const vector<int>& arr) {
    stack<int> st;
    for (int num : arr) {
        st.push(num);
    }

    vector<int> ans;
    while (!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}

int main() {
    vector<int> arr = {2, 3, 4, 5, 6};
    vector<int> ans = reverseVector(arr);

    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;
}
