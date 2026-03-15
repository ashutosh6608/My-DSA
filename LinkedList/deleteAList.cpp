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

    ~Node() {
        next = NULL; // safe
    }
};

void insertAtTail(Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);

    if (head == NULL) {
        head = tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int len(Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

void deleteFromHead(Node* &head, Node* &tail) {
    if (head == NULL) return;

    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;

    if (head == NULL) tail = NULL;
}

void deleteFromTail(Node* &head, Node* &tail) {
    if (head == NULL) return;

    if (head == tail) {
        delete head;
        head = tail = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }

    delete tail;
    tail = temp;
    tail->next = NULL;
}

void deleteAtPos(Node* &head, Node* &tail, int pos) {
    if (pos < 0 || pos >= len(head)) return;

    if (pos == 0) {
        deleteFromHead(head, tail);
        return;
    }

    Node* temp = head;
    for (int i = 0; i < pos - 1; i++) {
        temp = temp->next;
    }

    Node* curr = temp->next;
    temp->next = curr->next;

    if (curr == tail) {
        tail = temp;
    }

    curr->next = NULL;
    delete curr;
}

void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {23,45,89,24,90,76,84};

    Node* head = NULL;
    Node* tail = NULL;

    for (int x : arr) {
        insertAtTail(head, tail, x);
    }

    print(head);

    deleteFromHead(head, tail);
    print(head);

    deleteFromHead(head, tail);
    print(head);

    deleteAtPos(head, tail, 3);
    print(head);

    deleteFromTail(head, tail);
    print(head);

    return 0;
}
