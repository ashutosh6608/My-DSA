#include <iostream>
#include <queue>
#include <vector>   // <-- missing include
using namespace std;

class info {
public:
    int data;
    int row;
    int col;
    info(int data, int row, int col) {
        this->data = data;
        this->row = row;
        this->col = col;
    }
};

class compare {
public:
    bool operator()(info* a, info* b) {
        return a->data > b->data;
    }
};

vector<int> mergeSortedArray(vector<vector<int>>& nums) {
    int k = nums.size();          // number of arrays
    int n = nums[0].size();       // number of columns

    priority_queue<info*, vector<info*>, compare> minheap;

    for (int i = 0; i < k; i++) {
        info* temp = new info(nums[i][0], i, 0);
        minheap.push(temp);
    }

    vector<int> ans;

    while (!minheap.empty()) {
        info* temp1 = minheap.top();
        int topElement = temp1->data;
        int topRow = temp1->row;
        int topCol = temp1->col;
        minheap.pop();
        ans.push_back(topElement);

        if (topCol + 1 < n) {
            info* newInfo = new info(nums[topRow][topCol + 1], topRow, topCol + 1);
            minheap.push(newInfo);
        }
    }
    return ans;
}

int main() {
    // Converted static array to vector<vector<int>> (so function call works)
    vector<vector<int>> nums = {
        {2, 4, 6, 8},
        {1, 3, 5, 7},
        {0, 9, 10, 11}
    };

    vector<int> ans = mergeSortedArray(nums);
    for (auto i : ans) {
        cout << i << " ";
    }
    return 0;
}
