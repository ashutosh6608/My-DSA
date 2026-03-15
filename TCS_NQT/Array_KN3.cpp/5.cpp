

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int low = 0;
    int high = arr.size()-1;
    int mid = 0;
    
    
    while( mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        
       else if( arr[mid] == 1){
            mid++;
        }
        
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
        
    }
    
    for( int x : arr){
        cout << x << " ";
    }
}