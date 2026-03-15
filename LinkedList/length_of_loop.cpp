#include <iostream>
#include <bits/stdc++.h>
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
    tail->next = temp;
    tail = temp;
}

// Floyd Cycle Detection + Loop Length
int detectALoop(Node* head){
    if(head == NULL) return 0;

    Node* slow = head;
    Node* fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            int count = 1;
            slow = slow->next;
            while(slow != fast){
                count++;
                slow = slow->next;
            }
            return count;   // loop length
        }
    }
    return 0;   // no loop
}

int main(){
    vector<int> arr = {0,1,1,2,0,1,2,2,0,1,0,2};

    Node* head = NULL;
    Node* tail = NULL;

    for(int x : arr){
        insertAtTail(head, tail, x);
    }

    // make circular linked list
    tail->next = head;

    int ans = detectALoop(head);
    cout << ans << endl;

    return 0;
}
