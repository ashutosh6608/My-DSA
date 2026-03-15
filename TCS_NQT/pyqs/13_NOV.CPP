

#include<bits/stdc++.h>
using namespace std;

int main(){
    
      // read possible keys
      string keys_str;
      getline(cin, keys_str);
      vector<char>key_chars;
      stringstream kss(keys_str);
      char k;
      
      while( kss >> k){
          key_chars.push_back(k);
      }
      
      
      // read encrypted keys
      string enc_str;
      getline(cin,enc_str);
      stringstream ess(enc_str);
      vector<int>encrypted;
      int num;
      while( ess >> num){
           encrypted.push_back(num);
      }
      
      int min_enc = *min_element(encrypted.begin(), encrypted.end());
      int max_enc = *max_element(encrypted.begin(), encrypted.end());
      
      
      int lower_bound = max_enc - 26;
      int upper_bound = min_enc - 1;
      
      
      char valid_key = 0;
      for( char ch : key_chars){
          int key_val = ch - 'A' + 1;
          if( key_val >= lower_bound && key_val <= upper_bound){
              valid_key = ch;
              break;
          }
      }
      
      int key_val =  valid_key - 'A' + 1;
      string decrypted_msg;
      for( int e : encrypted){
          int orig_val = e - key_val;
          char orig_char = 'A' + (orig_val - 1);
          decrypted_msg += orig_char;
      }
      
      cout << decrypted_msg << endl;
      return 0;
}






#include<bits/stdc++.h>
using namespace std;

int main(){
    
    
     
    string str;
    getline(cin,str);
    
    stringstream mss(str);
    vector<char>crr;
    char cnum;
    
    while ( mss >> cnum){
         crr.push_back(cnum);
    }
    
    
    
    
    string str;
    getline(cin,str);
    
    stringstream ess(str);
    vector<int>arr;
    int num;
    
    while ( ess >> num){
         arr.push_back(num);
    }
    
    
    int maxEle = *max_element(arr.begin(), arr.end());
    int minEle = *min_element(arr.begin(), arr.end());
    
    int lower_b = maxEle - 26;
    int upper_b = minEle - 1;
    
    
    char valid_key = 0;
    
    for(char c : crr){
        if ( c - 'A' + 1 >= lower_b && c - 'A' + 1 <= upper_b) {
            valid_key = c;
            break;
        }
    }
    
    // decrypt
    
    int key_value = valid_key - 'A' + 1;
    
    string ans = "";
    
    
    for ( auto t : num){
       int orig_val  = (t - key_val);
       char orig_c = 'A' + (orig_val - 1)
       ans ++ orig_ch;
    }
    
    
    cout << ans;
    
     
}