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

Node* reverseK(Node* head, int k){
        Node* first = new Node(0);
        first->next = head;
        head = first;
        int x;
        Node* second ;
        Node* prev;
        Node* curr;
        Node* front;
        
        while(first->next){
            int x = k;
            Node* second = first->next;
            Node* prev = first;
            Node* curr = first->next;
            
            while(x && curr){
                front = curr->next;
                curr->next = prev;
                prev = curr;
                curr = front;
                x--;
            }
       // aakhir mein jo toota hai usko add krega ye     
            first->next = prev;
            second -> next = curr;
            first = second;
        }
        
        first = head;
        head = head->next;
        delete first;
        return head;
}


int main(){
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    Node *n5 = new Node(50);
    Node *n6 = new Node(60);
    Node *n7 = new Node(70);
    Node *n8 = new Node(80);
    Node *n9 = new Node(90);
    Node *n10 = new Node(100);
    Node *n11 = new Node(110);
    Node *n12 = new Node(120);
    Node *n13 = new Node(130);
    Node *n14 = new Node(140);
    
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
    n7->next = n8;
    n8->next = n9;
    n9->next = n10;
    n10->next = n11;
    n11->next = n12;
    n12->next = n13;
    n13->next = n14;
    
    Node* head = n1;
    int k = 4;
    
    Node* ans = reverseK(head,k);
    
    while(ans != NULL){
        cout << ans ->data << " ";
        ans = ans->next;
    }
    
}

    
 

