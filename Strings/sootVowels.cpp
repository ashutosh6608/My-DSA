#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s); 
    
    vector<int> lower(26, 0);
    vector<int> upper(26, 0);
   
    // Count lowercase vowels and replace with '#'
    for(int i = 0; i < s.size(); i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            lower[s[i]-'a']++;
            s[i] = '#';
        }
    }
    
    // Count uppercase vowels and replace with '#'
    for(int i = 0; i < s.size(); i++){
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            upper[s[i]-'A']++;
            s[i] = '#';
        }
    }
    
    string ans;
    
    // Rebuild sorted lowercase vowels
    for(int i = 0; i < 26; i++){
        if(lower[i] > 0){
            for(int k = 0; k < lower[i]; k++){
                ans += char(i + 'a');
            }
        }
    }
    
    // Rebuild sorted uppercase vowels
    for(int i = 0; i < 26; i++){
        if(upper[i] > 0){
            for(int k = 0; k < upper[i]; k++){
                ans += char(i + 'A');
            }
        }
    }
    
    // Replace '#' with sorted vowels
    int j = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '#'){
            s[i] = ans[j++];
        }
    }
    
    cout << s << endl;
}
