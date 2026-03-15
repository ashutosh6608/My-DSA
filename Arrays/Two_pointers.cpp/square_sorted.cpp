
// Given a sorted array conating negative and positive part now do sqaure of this array and then return sorted order

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> arr1; // negatives (squared)
    vector<int> arr2; // positives (squared)

    for(int i = 0; i < n; i++){
        if(arr[i] >= 0)
            arr2.push_back(arr[i] * arr[i]);
        else
            arr1.push_back(arr[i] * arr[i]);
    }

    int i = 0;
    int j = arr1.size() - 1;  // start from largest negative square
    vector<int> finalarr;

    while(i < arr2.size() && j >= 0){
        if(arr2[i] < arr1[j]){
            finalarr.push_back(arr2[i]);
            i++;
        }
        else{
            finalarr.push_back(arr1[j]);
            j--;
        }
    }

    while(i < arr2.size()){
        finalarr.push_back(arr2[i]);
        i++;
    }

    while(j >= 0){
        finalarr.push_back(arr1[j]);
        j--;
    }

    for(int x : finalarr){
        cout << x << " ";
    }
}
