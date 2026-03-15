
// rods baatna hai amx size mein


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& rods,int i, int sumA, int sumB){

    if(i == rods.size()){
        if(sumA == sumB)
            return sumA;
        return 0;
    }

    int takeA = solve(rods, i+1, sumA + rods[i], sumB);

    int takeB = solve(rods, i+1, sumA, sumB + rods[i]);

    int skip = solve(rods, i+1, sumA, sumB);

    return max({takeA, takeB, skip});
}

int main(){

    int n;
    cin >> n;

    vector<int> rods(n);

    for(int i = 0; i < n; i++){
        cin >> rods[i];
    }

    cout << solve(rods,0,0,0);

}















////////////////////////////////////////////

// L R AND N jo ki space seprated integer hai wo bhi ddiya hai 
// now L R ke bich mein jo bhi hai eenko array wale integers ko
// chor ke vhi print karana hai 

#include<bits/stdc++.h>
using namespace std;

int main(){

    int L,R,N;
    cin >> L >> R >> N;

    vector<int> arr(N);

    for(int i=0;i<N;i++){
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());

    int start = L;
    
    for( int i = 0; i < arr.size(); i++){
        if( arr[i] > start){
            cout << "[" << start << " " << arr[i]-1 << "]";
        }
          start = arr[i] + 1;
    }
    
    if ( start <= R){
        cout << "[" << start << " " << R << "]";
    }
}