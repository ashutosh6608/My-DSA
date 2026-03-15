
// right rotation by k

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,k;
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cin >> k;

    k = k % n;

    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());

    for(int x : arr){
        cout << x << " ";
    }
}



// left rotation

cin >> k;
k = k % n;

reverse(arr.begin(), arr.begin()+k);
reverse( arr.begin()+k, arr.end());
reverse(arr.begin(), arr.end());