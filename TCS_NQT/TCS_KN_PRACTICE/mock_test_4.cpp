

Given an matrix of size m x n, the task is to find the count of all unique possible paths from top left to the bottom right with the constraints that from each cell we can either move only to the right or down.

Input:

m = 2, n = 2
Output: 2
Explanation: There are two paths
(0, 0) -> (0, 1) -> (1, 1)
(0, 0) -> (1, 0) -> (1, 1)


#include <iostream>
using namespace std;


int main(){
    int m , n;
    cin >> m >> n;
    int N = m + n - 2;
    int r = m - 1;
    long long res = 1;

    for(int i = 1; i <= r; i++) {
        res = res * (N - r + i) / i;
    }

    cout << res;
}

