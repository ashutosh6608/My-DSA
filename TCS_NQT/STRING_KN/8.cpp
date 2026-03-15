#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    unordered_set<char> seen;
    string ans = "";

    for(char c : s) {
        if(seen.find(c) == seen.end()) {
            ans += c;
            seen.insert(c);
        }
    }

    cout << ans;
}