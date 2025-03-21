//Program to insert a node at
//specific position of Linkedlist

#include <iostream>
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

// Function to insert a node at any given position
Node* insertAtPosition(Node* head, int data, int position) {
    Node* newNode = new Node(data);

    if (position == 1) {  // Insert at head
        newNode->next = head;
        return newNode;  // New head
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
    temp->next = newNode;

    return head;  // Return updated head
}

// Function to print the linked list
void printList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "NULL\n";
}

int main() {
    // Creating a linked list: 10 -> 20 -> 30 -> 40
    Node* a = new Node(10);
    a->next = new Node(20);
    a->next->next = new Node(30);
    a->next->next->next = new Node(40);

    cout << "Original List:\n";
    printList(a);

    int pos, value;
    cout << "\nEnter position to insert: ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> value;

    // Insert node at given position
    a = insertAtPosition(a, value, pos);

    cout << "List after insertion:\n";
    printList(a);

    return 0;
}
