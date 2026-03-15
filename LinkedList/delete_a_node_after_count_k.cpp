#include<bits/stdc++.h>
using namespace std;

Node* deleteK(Node* &head, Node* &tail, int k){
    if( k == 1)
    return NULL;
    
    Node* curr = head;
    Node* prev = NULL;
    int count = 1;
    
    while(curr){
          if( k == count){
              prev->next = curr->next;
              delete curr;
              curr = prev->next;
              count = 1;
          }
          else {
               prev = curr;
               curr = curr->next;
               count++;
          }
    }
    return head;
}