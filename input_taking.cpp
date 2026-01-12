#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int>arr(n)
    
    for ( int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for ( int a : arr){
         cout << a << ' ';
    }
    return 0;
}


int main(){
    int n;
    cin >> n;
    vector<int>arr;
    for ( int i = 0; i < n; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    
    for ( int a : arr){
        cout << a << endl;
    }
    return 0;
}


int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    
    vector<int> arr;
    string temp;
    
    while (getline(ss, temp, ',')) {
        if (!temp.empty())
            arr.push_back(stoi(temp));
    }

    for (int num : arr) {
        cout << num << ' ';
    }
    return 0;
}



int main(){
    string s;
    getline(cin,s);
    cout << s;
    return 0;
}


int main(){
    int n ;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin,s);
    
    cout << n << " "<< s << endl;
    return 0;
} again see