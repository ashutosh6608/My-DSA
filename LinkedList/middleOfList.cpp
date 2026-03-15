
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


Node* middleList(Node* &head){
      Node* slow= head;
      Node* fast = head;
      
      while( fast != NULL && fast ->next != NULL){
          
          slow = slow->next;
          fast = fast->next->next;
      }
      return slow;
}

int main(){
    vector<int>arr = {34,67,98,23,27};
     Node* head = NULL;
     Node* tail = NULL;
      for (int x : arr){
          insertAtTail(head,tail,x);
      }
      
      
      Node* mid = middleList(head);
      if(mid){
      cout << " Middle element " << mid->data << endl;
      }
      return 0;
      
}