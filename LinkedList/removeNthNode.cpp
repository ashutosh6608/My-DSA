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
         if(head == NULL){
             head = tail = temp;
             return;
         }
         
         tail -> next = temp;
         tail = temp;
}

int len(Node* head){
    int len = 0;
    while(head != NULL){
        head = head->next;
        len++;
    }
    return len;
}


void removeNthNode(Node* &head, Node* & tail, int n){
    
    if( head == NULL ) return;
      int l = len(head);
      int k = l - n;
      
      
      
      Node* temp = head;
      
      for ( int i = 0; i < l-n - 1; i++){
            temp = temp->next;
      }
      
      Node* temp1 = temp->next;
      Node* temp2 = temp1->next;
      temp->next = temp2;
      temp1->next = NULL;
      delete temp1;
      
      
}


void print(Node* head){
      while(head != NULL){
          cout << head->data << " ";
          head = head -> next;
      }
        cout << endl;
}


int main(){
    
      vector<int>arr = {23, 45, 78, 89, 87, 45};
      Node* head = NULL;
      Node* tail = NULL;
      int n = 2;
     
     for ( int x : arr){
         insertAtTail(head,tail,x);
     }
     
     print(head);
     removeNthNode(head,tail,n);
     print(head);
       
       return 0;
      
}