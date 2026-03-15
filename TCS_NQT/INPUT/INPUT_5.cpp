#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    cin >> r >> c;
    cin.ignore();

    string line;
    getline(cin,line);

    // line.erase(remove(line.begin(), line.end(), ' '), line.end());

    stringstream ss(line);
    vector<int> nums;
    string token;

    while(getline(ss,token,',')){
        nums.push_back(stoi(token));
    }

    // while( ss >> token){
    //     nums.push_back(stoi(token));
    // }

    vector<vector<int>> mat(r,vector<int>(c));
    int k=0;

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            mat[i][j]=nums[k++];

    for(auto &row:mat){
        for(int x:row) cout<<x<<" ";
        cout<<endl;
    }
}