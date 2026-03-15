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

  Node* intersectionInaLinkedList(Node* &head1, Node* &head2){
      Node* temp1 = head1;
      Node* temp2 = head2;
      int count1 = 0;
      int count2 = 0;
      
      
      while(temp1 != NULL){
           count1++;
            temp1 = temp1->next;
           
      }
      
       while(temp2 != NULL){
            count2++;
           temp2 = temp2->next;
          
       }
       
      int count = count1 - count2;
      if( count > 0 ){
          while(count--){
              head1 = head1->next;
          }
          while(head1 != head2){
              head1 = head1->next;
              head2 = head2->next;
          }
          return head1;
      } 
      else {
          count = -count;
          while(count--){
              head2 = head2->next;
          }
          while(head1 != head2){
              head1 = head1->next;
              head2 = head2->next;
          }
          return head2;
      }
      
  }



int main(){
       Node* n1 = new Node(30);
       Node* n2 = new Node(40);
       Node* n3 = new Node(50);
       Node* n4 = new Node(60);
       Node* n5 = new Node(70);
       Node* n6 = new Node(80);
       Node* n7 = new Node(90);
       Node* n8 = new Node(10);
       Node* n9 = new Node(20);
       
    n1->next =  n2;   
    n2->next  = n3;
    n3->next  = n4;
    n4->next  = n5;
    n5->next  = n6;
    n6->next  = n7;
    n8->next = n2;
    n9->next = n6;
    
    
    Node* head1 = n1;
    Node* head2 = n8;
    
        Node* ans = intersectionInaLinkedList(head1, head2);
        cout << ans->data << endl;

        
      
}