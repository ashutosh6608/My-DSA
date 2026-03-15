// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    double n;
    cin >> n;
    

    int n1 = floor(n);
    double n2 = n-n1;
    
    int num = 0;
    
    while( n1 > 0){
        int d = n1 % 10;
        num = num*10 + d;
        n1 = n1/10;
    }
    
    double newDigit = num + n2;
    
    double ans = newDigit/2.0;
    
    cout << fixed << setprecision(2) << ans + 1e-9 << endl;
}

// ALWAYS USE 1E-9 INT HIS CASE