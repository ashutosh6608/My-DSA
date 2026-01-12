#include<iostream>
#include<vector>
using namespace std;



pair<int,int> findRepAndMissNumber(vector<int>& nums){
    int n = nums.size();
    int xor_all = 0;

    for ( int i =0; i < n; i++){
        xor_all ^= nums[i];
    }

    for ( int i = 1; i <= n; i++){
        xor_all ^= i;
    }

    int set_bit = xor_all & ~(xor_all - 1);

    // make two groups

    int x = 0; 
    int y = 0;

    for ( int i = 0; i < n; i++){
        if(nums[i] & set_bit){
            x ^= nums[i];
        }
        else {
            y ^= nums[i];
        }
    }


    // again xor group with numbers

    for ( int i  = 1; i <= n; i++){
        if(i & set_bit){
            x ^= i;
        }
        else {
            y ^= i;
        }
    }



    // step 4: determine which is missing and which is repaeting

    for( int i =0; i < n; i++){
        if(nums[i] == x) {
            return {x,y};
        }
    }

    return {y,x}
}


int main(){
    vector<int>nums = {4,3,6,2,1,6};

    auto result = findRepAndMissNumbe(nums);

    cout << "Repeating" << result.first << endl;
    cout << "Missing" << result.second << endl;
    return 0;
}