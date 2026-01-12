#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>&arr, int target){
    int s = 0;
    int e = arr.size() - 1;
    int ans = arr.size();
    int mid;

    while(s <=e){
        mid = s + (e-s)/2;
        if(arr[mid]  == target){
            ans = mid;
            break;
        }
        else if(arr[mid] < target){
               s = mid + 1;
        }
        else {
            ans = mid;
            e = mid-1;
        }
    }
      return ans;
}


int main(){
    vector<int>arr = {2,4,6,7,8,9};
    int target = 5;
    int ans = searchInsert(arr,target);
    cout << ans << " " << endl;
    return 0;
}



