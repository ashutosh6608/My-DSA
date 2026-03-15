
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    
    if( N  == 0){
        cout << 1;
        return 0;
    }
    
    
    int bits = floor(log2(N)) + 1;
    int mask = ( 1 << bits) - 1;
    
    int result = N ^ mask;
    
    cout << result;
}