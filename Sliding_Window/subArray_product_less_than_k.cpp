

int numSubarrayProductLessThanK(vector<int>&nums, int k){
    int product = 1;
    int start = 0;
    int end = 0;
    int n = nums.size();
    int count = 0;

    while ( end < n){
        product *= nums[end];

        while (product >= k && start <=end){
            Product/= nums[start];
            start++;
        }
         count +=  1 + (end-start);
         end++;
    }
      return count;
}