



bool isPossible(vector<int>arr, int n , int m, int maxPages){
    int studentCount = 1;
    int pages = 0

    for ( int i = 0; i < n ; i++){
        if(arr[i]  > maxPages){
            return false;
        }
        if(pages + arr[i] <= maxPages){
            pages += arr[i];
        }
        else {
            studentCount++;
            if(studentCount > m){
                return false;
            }
            pages = arr[i];
        }
    }
    return true;
}


int allocateBooks(vector<int>arr, int n , int m){
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n ; i++){
        sum += arr[i];
    }


    int e = sum;
    int ans = -1;

    int mid = s+ (e-s)/2;

    while( s <= e){
        
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid-1;
    }
    else {
        s = mid+1;
    }
    mid = s+(e-s)/2;
     
    }
    return false;
}


