

// SORT A LIST
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

  void insertAtTail(Node* &head, Node* &tail, int data){
      Node* temp = new Node(data);
      if( head == NULL){
          head = tail = temp;
          return;
      }
      tail->next = temp;
      tail = temp;
  }

  Node* sortAList(Node* &head, Node* &tail){
         Node* temp = head;
         int count0 = 0;
         int count1 = 0;
         int count2 = 0;
         
         while(temp != NULL){
             if(temp->data == 0){
                 count0++;
                 temp = temp->next;
             }
             else if( temp->data == 1){
                 count1++;
                 temp = temp->next;
             }
             else {
             count2++;
             temp = temp->next;
             }
         }
         
         temp = head;
         while(count0--){
             temp->data = 0;
             temp = temp->next;
             
         }
         
         while(count1--){
             temp->data = 1;
             temp = temp->next;
           
         }
         
         while(count2--){
             temp->data = 2;
             temp = temp->next;
           
         }
         
         return head;
  }
  
  
  void print(Node* head){
      while(head != NULL){
          cout << head->data << " ";
          head = head->next;
      }
      cout << endl;
  }
  
  int main(){
         vector<int>arr = {0,1,1,2,0,1,2,2,0,1,0,2};
         
         Node* head = NULL;
         Node* tail = NULL;
         
         for( int x : arr){
             insertAtTail(head,tail,x);
         }
         
         print(head);
         Node* head1 = sortAList(head,tail);
         print(head1);
         
         
  }