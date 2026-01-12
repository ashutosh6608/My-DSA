

bool isPossible(vector<int>arr, int n , int m, int mid){
    int painterCount = 1;
    int piles = 0;

    for ( int i = 0; i < n; i++){
        if(piles + arr[i] <= mid){
            piles += arr[i];
        }
        else {
            painterCount++;
            if(painterCount > m || arr[i] > mid){
                return false;
            }
        piles = arr[i];
        }
    }
    return true;
}



int painterPartition(vector<int>arr, int n , int m){
    int s = 0;
    int sum = 0;
    for ( int i = 0; i < n; i++){
        sum += arr[i]
    }

    int e = sum;
    int ans = -1;
    int mid = s + ( e-s)/2;

    while( s <= e){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
     return ans;
}