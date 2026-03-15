

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int X;
    int Y;
    cin >> X >> Y;
    
    int arr[n];
    
    for( int i = 0; i < n ;i++){
        int ele;
        cin >> ele;
        arr[i] = ele;
    }
    
    int count = 0;
    
    for( int i = 0; i < n;i++){
        for( int j = 0; j < n; j++){
             if(i == j) continue;
             string num = to_string(arr[i]) + to_string(arr[j]);
             int number = stoi(num);
             if( X <= number && Y >= number){
                 count++;
             }
        }
    }
    
       cout << count;
}




//////////////////////////////////////////////////////
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    unordered_map<char,int> freq;

    // count frequency
    for(char c : s){
        freq[c]++;
    }

    // find first non-repeating character
    char firstNonRepeat;
    for(char c : s){
        if(freq[c] == 1){
            firstNonRepeat = c;
            break;
        }
    }

    // find character with maximum frequency
    char maxChar;
    int maxi = 0;

    for(auto &p : freq){
        if(p.second > maxi){
            maxi = p.second;
            maxChar = p.first;
        }
    }

    cout << firstNonRepeat << endl;
    cout << maxChar << endl;
}