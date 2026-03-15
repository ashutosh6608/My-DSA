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


    void removeDuplicateElementFromList(Node* &head, Node* &tail){
        
        if(head == NULL) return;
            Node* curr = head->next;
            Node* prev = head;
            
            while(curr){
                if( curr->data == prev->data){
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
                }
            else {
                prev = prev->next;
                curr = curr -> next;
            }
            }
           
    }
    
    
    void print(Node* head){
        while(head != NULL){
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }
    
    
    int main(){
           vector<int>arr = {45,78,78,98,45,86};
           sort(arr.begin(), arr.end());
           
           Node* head = NULL;
           Node* tail = NULL;
           
           for ( int x: arr){
               insertAtTail(head,tail,x);
           }
              print(head);
             removeDuplicateElementFromList(head,tail);
             print(head);
          
    }
    
    
    
    
