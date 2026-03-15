#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    string result = "";
    int n = s.length();
    int i = 0;

    while (i < n) {

        int count = 1;

        // Count consecutive same characters
        while (i + 1 < n && s[i] == s[i + 1]) {
            count++;
            i++;
        }

        if (count >= 2) {
            if (result.empty() || result.back() != '#') {
                result += '#';
            }
        } else {
            result += s[i];
        }

        i++;  // Move to next character
    }

    cout << result << endl;
    return 0;
}