class Solution {
public:
    class Node {
    public:
        int data;
        int count;
        Node(int data, int count) {
            this->data = data;
            this->count = count;
        }
    };

    class compare {
    public:
        bool operator()(Node a, Node b) {
            return a.count < b.count; // max-heap by frequency
        }
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for (int n : nums) {
            freq[n]++;
        }

        priority_queue<Node, vector<Node>, compare> maxHeap;

        for (auto &p : freq) {
            maxHeap.push(Node(p.first, p.second));
        }

        vector<int> ans;
        while (k-- > 0 && !maxHeap.empty()) {
            Node topNode = maxHeap.top();
            maxHeap.pop();
            ans.push_back(topNode.data);
        }
        return ans;
    }
};
