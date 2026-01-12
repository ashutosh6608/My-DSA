#include<iostream>
#include<vector>
using namespace std;

int peakElement(vector<int>&arr){
    int s = 0;
    int e = arr.size() - 1;
    int mid = 0;
   

    while(s <= e){
        mid = s + (e-s)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1] ){
          return mid;
        }

        else if (arr[mid] < arr[mid+1]){
             s = mid+1;
        }
        else {
              
              e = mid;
        }
    }

    return mid;
}



int main(){
    vector<int>arr = {2,4,6,8,9,8,7,6,4};
    int ans = peakElement(arr);
    cout << ans << endl;
    return 0;
}