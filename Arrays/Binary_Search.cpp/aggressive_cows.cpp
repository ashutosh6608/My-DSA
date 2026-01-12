#include <bits/stdc++.h>
using namespace std;


bool isPossible(vector<int>& stalls, int k, int mid){
    int cowCount = 1;
    int lastPos = stalls[0];

    for ( int i = 0; i < stalls.size(); i++){
        if(stalls[i] - lastPos >= mid){
            cowCount++;
            lastPos = stalls[i];

            if(cowCount == k){
                return true;
            }
        }
    }
    return false;
}

int aggressiveCows(vector<int>& stalls, int k) {
    sort(stalls.begin(), stalls.end());
    int s = 1;
    int e = stalls.back() - stalls.front();
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (isPossible(stalls, k, mid)) {
            ans = mid;
            s = mid + 1;   // try for larger distance
        } else {
            e = mid - 1;   // try smaller distance
        }
    }
    return ans;
}

int main() {
    vector<int> stalls = {1, 2, 4, 8, 9};
    int k = 3;
    cout << aggressiveCows(stalls, k) << endl; // Output: 3
    return 0;
}
