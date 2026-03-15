#include<bits/stdc++.h>
using namespace std;

class Node{
     int data;
     Node* next;
     
    Node(int data){
         this->data = data;
         this->next = next;
     }
}

void insertAtTail(Node* &head, Node* &tail, int data){
     Node* temp = new Node(data);
        if(head == NULL){
            head = new Node(data);
        }
        
       
        tail -> next = temp;
        tail = temp;
        return;
}


void reverseList(Node* &head, Node* &tail){
    
    // only value reverse method
           vector<int>ans;
           Node* temp = head;
           while(temp != NULL){
               ans.push_back(temp->data);
               temp = temp->next;
           }
             Node* temp1 = head;
             int i = ans.size()-1;
              while(temp1){
                  temp1->data = ans[i];
                  i--;
                  temp1 = temp1->next;
              }
}

   void print(head){
         Node* temp = head;
         while ( temp != NULL){
             cout << temp->data << end;
             temp = temp->next;
         }
         cout << endl;
   }


  void reverse(Node* &head, Node* &tail){
        Node* curr = head;
        Node* prev = NULL;
        Node* temp = NULL;
        while(curr){
             temp = curr->next;
             curr -> next = prev;
             prev = curr;
             curr = temp;
             
        }
        head = prev;
  }
  
  
  
    Node* reverseUsingRecursion(Node* &curr, Node* &prev){
           if( curr == NULL){
               return prev;
           }
           Node* temp = curr->next;
           curr-> next = prev;
         return reverse(temp,curr)
    }

int main(){
      vector<int>arr = {23, 56, 78, 45, 98, 12};
        for ( x : arr){
            insertAtTail(head, tail, arr[i]);
        }
         print(head);
        reverseList(head,tail);
        print(head);

       reverse(head);
       print(head);
       
       head = reverseUsingRecursion(head,NULL);
       print(head):
       
       return 0;
       
        
}