#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this-> data = data;
        this->next = NULL;
    }
};


void insertAtHead(Node* &head, Node* &tail, int data){
    

    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node* newNode = new Node(data);

    newNode->next = head;

    head = newNode;
}


void insertAtTail(Node* &head, Node* &tail, int data){

    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node* newNode = new Node(data);

    tail->next = newNode;

    tail = newNode;
}

int findLength (Node* &head){
    int len = 1;
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(int data,int position,Node* &head,Node* &tail){
     if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

     if(position == 0){
        insertAtHead(head,tail,data);
        return;
    }

    int len = findLength(head);

     if(position == len){
        insertAtTail(head,tail,data);
        return;
     }


     int i = 1;
     Node* prev = head;
     while( i < position - 1){
        prev = prev -> next;
        i++;
     }
     Node* curr = prev->next;
     
     Node* newNode = new Node(data);

     newNode-> next = curr;

     prev->next = newNode;

}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){ // Step - 3 Stop when we reach NULL
        // Step - 1 Print
        cout<<temp->data<<" ";
        // Step - 2 Move temp to next
        temp = temp->next;
    }
}
int main(){
    Node* head = new Node(10);
    Node* tail = head;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,50);
    insertAtPosition(101,5,head,tail);
    print(head);
    return 0;
}