#include<iostream>
using namespace std;

class Node{
    public:
     int data;
     Node* next;
     Node(){
        this-> data = 0;
        this->next = NULL;
     }
     Node(int data){
        this->data = data;
        this->next = NULL;
     }
};


void insertAtHead(Node* &head, Node* & tail, int data){
    Node* newNode = new Node(data);

    if( head == NULL){
        head = newNode;
        tail = newNode;
    }

    newNode->next = head;

    head = newNode;
}


void insertAtTail(Node* &head, Node* &tail, int data){
       // step 1
       Node* newNode = new Node(data);

       if(head == NULL){
        head = newNode;
        tail = newNode;
       }

       // step 2;
       tail -> next = newNode;

       tail = newNode;
}


void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp-> data << " ";
        tenp = temp -> next;
    }
}

int main(){
    Node* head = new Node(10);
    Node* tail = head;

    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,50);

      print(head);
      return 0;
}