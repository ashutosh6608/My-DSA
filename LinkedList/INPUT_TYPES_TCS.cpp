

/////////////////////////  TYPE 1  ////////////////////////////

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

int main(){
       Node* n1 = new Node(30);
       Node* n2 = new Node(40);
       Node* n3 = new Node(50);
       Node* n4 = new Node(60);
       Node* n5 = new Node(70);
       Node* n6 = new Node(80);
       Node* n7 = new Node(90);
       Node* n8 = new Node(100);
       Node* n9 = new Node(110);
       Node* n10 = new Node(120);
       Node* n11 = new Node(130);
       Node* n12 = new Node(140);
    n1->next =  n2;   
    n2->next  = n3;
    n3->next  = n4;
    n4->next  = n5;
    n5->next  = n6;
    n6->next  = n7;
    n7->next  = n8;
    n8->next  = n9;
    n9->next  = n10;
    n10->next = n11;
    n11->next = n12;
    
    n12->next = n6;
    
    Node* head = n1;
    
    
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
      
}


/////////////////////////// TYPE 2 //////////////////////////////

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

int main() {
    int n;
    cin >> n;          // number of nodes

    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;      // node value

        Node* newNode = new Node(x);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Printing linked list
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
