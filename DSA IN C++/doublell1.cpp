//C++ Program to insert node at front,
//at end, at any position in double LL

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
    
    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Function to insert a node at the front
Node* insertAtFront(Node* head, int data) {
    Node* newNode = new Node(data);
    if (head != NULL) {
        newNode->next = head;
        head->prev = newNode;
    }
    return newNode; // New head
}

// Function to insert a node at the end
Node* insertAtEnd(Node* head, int data) {
    Node* newNode = new Node(data);
    if (head == NULL) return newNode; // If list is empty, new node becomes head

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

// Function to insert a node at a specific position
Node* insertAtPosition(Node* head, int data, int position) {
    Node* newNode = new Node(data);
    
    if (position == 1) {  // Insert at head
        newNode->next = head;
        if (head != NULL) head->prev = newNode;
        return newNode; // New head
    }

    Node* temp = head;
    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {  // If position is out of bounds
        cout << "\nInvalid position!";
        delete newNode;
        return head;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;

    return head;  // Return updated head
}

// Function to print the doubly linked list
void printList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " <-> ";
        curr = curr->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;

    // Insert nodes at different positions
    head = insertAtFront(head, 10);
    head = insertAtFront(head, 20);
    head = insertAtEnd(head, 30);
    head = insertAtEnd(head, 40);
    
    cout << "Initial Doubly Linked List:\n";
    printList(head);

    int pos, value;

    // Insert at specific position
    cout << "\nEnter position to insert: ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> value;

    head = insertAtPosition(head, value, pos);

    cout << "Doubly Linked List after insertion:\n";
    printList(head);

    return 0;
}
