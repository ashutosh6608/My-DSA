

#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, N;

    cin >> k >> N;

    vector<pair<int,string>> students;

    for ( int i = 0; i < N; i++){
        int marks;
        string name;
        cin >> marks >> name;
        students.push_back({marks,name});
    }

    sort(students.begin(), students.end(), [](auto &a, auto &b){
          return a.first > b.first;
    });

   for (int i = 0; i < k && i < (int)students.size(); i++) { 

cout << students[i].second << ": " << students[i].first << "\n"; 
} 
return 0;
}