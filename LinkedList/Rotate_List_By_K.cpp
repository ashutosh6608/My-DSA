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


Node* rotateListByK(Node* &head, Node* &tail, int k){
         if(head == NULL || head->next == NULL || k == 0)   
           return head;
           
           
           int l = len(head);
           
           // normalize k
           k = k % l;
           if( k == 0) return head;
           
           // make list circular
           tail -> next = head;
           // find new tail ( l - k - 1);
           Node* newTail = head;
           for ( int i = 1; i < l - k; i++){
               newTail = newTail -> next;
           }
           
           // step 5 : break;
           Node* newHead = newTail -> next;
           newTail->next = NULL;
           
           tail = newTail;
            return newHead;
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
      int k = 2;
     
     for ( int x : arr){
         insertAtTail(head,tail,x);
     }
     
     print(head);
     
    head =  rotateListByK(head,tail,k);
     print(head);
       
       return 0;
      
}