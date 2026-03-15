

Count Character Occurrences
You are given two strings, str1 and str2. Your mission is to calculate the total number of occurrences of each unique character of str2 within the string str1. The task is to find the sum of occurrences of all unique characters from str2 in str1 and return this total count.

 
Input Format
 

For each test case:
The first line contains the string str1.
The second line contains the string str2.
Output Format
For each test case, output the total sum of occurrences of characters in str2 found in str1 on a new line.

 
Constraints
1≤T≤100
1≤∣str1∣,∣str2∣≤10
The strings consists of lowercase letters only.
 
Sample 1:
 

helloworld do

abacabadabacaba abcd

abc abcdabcdabcdabcd

3
15
3
 






#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
     string str1,str2;
     getline(cin,str1);
     getline(cin,str2);


     unordered_map<char,int>freq;

     for( char ch  : str1 ){
        freq[ch]++;
     }


     int count = 0;
     bool visited[26] = {false};
    
     for( char c : str2){
         if(visited[c-'a']){
             continue;
         }
         else {
         int ans = freq[c];
         count += ans;
         visited[c-'a'] = true;
         }
     }

     cout << count;
     
}