#include<iostream>
#include<vector>
using namespace std;

vector<int> firstAndLastIndex(vector<int>& nums, int target) {
    int s = 0, e = nums.size() - 1, mid;
    int first = -1, last = -1;

    // Find first occurrence
    while (s <= e) {
        mid = s + (e - s) / 2;
        if (nums[mid] == target) {
            first = mid;
            e = mid - 1;  // move left
        } else if (nums[mid] < target) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    // Reset for last occurrence
    s = 0; 
    e = nums.size() - 1;

    while (s <= e) {
        mid = s + (e - s) / 2;
        if (nums[mid] == target) {
            last = mid;
            s = mid + 1;  // move right
        } else if (nums[mid] < target) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return {first, last};
}

int main() {
    vector<int> nums = {2,3,4,5,6,7,8,8,8,8,8,8,9};
    int target = 8;
    vector<int> ans = firstAndLastIndex(nums, target);

    for (int x : ans) cout << x << " ";
    cout << endl;
    return 0;
}
