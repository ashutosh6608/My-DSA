#include<bits/stdc++.h>
using namespace std;

int main(){
    string input;
    getline(cin, input);

    string s = "";

    // Keep only lowercase letters
    for(char c : input){
        if(c >= 'a' && c <= 'z'){
            s += c;
        }
    }

    int n = s.size();

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            cout << s.substr(i, j - i + 1);

            if(!(i == n-1 && j == n-1))
                cout << ", ";
        }
    }

    return 0;
}