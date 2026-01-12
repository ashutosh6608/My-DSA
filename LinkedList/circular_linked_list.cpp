#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = this;
    }

    ~Node(){
        int val = this->data;
        if( this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << "Memory free for node with value = " << val << endl;
    }

};

int findLength(Node* &head){
    int len = 1;
    Node* temp = head;
    while(temp->next != head){
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head,Node* &tail,int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
        return;
    }
    // Creation of new Node
    Node* temp = new Node(data);
    // Connection step
    tail->next = temp;
    temp->next = head;
    // Update head
    head = temp;
}


void insertAtTail(Node* &head,Node* &tail,int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
        return;
    }
    // Creation 
    Node* newNode = new Node(data);
    // Connection step
    tail->next = newNode;
    newNode->next = head;
    // Update tail
    tail = newNode;
}


void insertAtPosition(Node* &head,Node*& tail,int data,int pos){
    // Here the concept of one pointer we have to use 
    // Empty linked list
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        return;
    }
    if(pos == 0){
        insertAtHead(head,tail,data);
        return;
    }
    int len = findLength(head);
    cout<<len<<endl;
    if(len == pos){
        insertAtTail(head,tail,data);
        return;
    }
    // step1 : find the position of prev and curr
    int i = 1;
    Node* prev = head;
    while(i<pos){
        prev = prev->next;
        i++;
    }
    // Creation of new Node
    Node* newNode = new Node(data);
    newNode -> next = prev->next;
    prev->next = newNode;
}
void deleteHead(Node* &head,Node* &tail){
    if(head == NULL){
        return;
    }
    Node* temp = head; 
    head = head->next;
    tail->next = head;
    temp->next = NULL;
    delete temp;
}
void deleteTail(Node* &head,Node* &tail){
    if(head == NULL){
        return;
    }
    Node* temp = head;
    while(temp->next!=tail){
        temp = temp->next;
    }
    Node* temp1 = tail;
    temp->next = head;
    tail->next = NULL;
    tail = temp;
    delete temp1;
}