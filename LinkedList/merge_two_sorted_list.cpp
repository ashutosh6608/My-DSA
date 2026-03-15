#include<iostream>
#include<bits/stdc++.h>
using namespace std;

  class Node{
      public:
      int data;
      Node* prev;
      Node* next;
      
      Node(int data){
          this->data = data;
          this->next = NULL;
          this->prev = NULL;
      }
  };
  
   void insertAtTail(Node* &head, Node* &tail, int data){
       Node* temp = new Node(data);
          if( head == NULL){
               head = tail = temp;
               return;
          }
          
          tail->next = temp;
          temp->prev = tail;
          tail = temp;
   }


    Node* mergeTwoSortedList(Node* &head1, Node* &tail1, Node* &head2, Node* &tail2){
        
          Node* head = new Node(0);
          Node* tail = head;
          
          while(head1 && head2){
              if(head1 -> data <= head2->data){
                  tail->next = head1;
                  head1 = head1->next;
                  tail = tail -> next;
                  tail->next = NULL;
              }
              else {
                  tail->next = head2;
                  head2 = head2->next;
                  tail = tail ->next;
                  tail -> next = NULL;
              }
          }
          
          if(head1)
          tail -> next = head1;
          else
          tail -> next = head2;
          
          tail = head;
          head = head->next;
          delete tail;
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
           vector<int>arr = {45,56,78,96};
           vector<int>arr1 = {22,35,39};

           
           Node* head1 = NULL;
           Node* tail1 = NULL;
           
           Node*head2 = NULL;
           Node* tail2 = NULL;
           
           for ( int x: arr){
               insertAtTail(head1,tail1,x);
           }
           
            for ( int y: arr1){
               insertAtTail(head2,tail2,y);
           }
           
           
             print(head1);
             print(head2);
             
            
             
             Node* head = mergeTwoSortedList(head1,tail1, head2, tail2);
             print(head);
          
    }
    
    
    
    
