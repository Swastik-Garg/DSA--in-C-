//C++ Program to delete a node
//from any given position of LinkedList

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

// Function to delete a node at any given position
Node* deleteAtPosition(Node* head, int position) {
    if (head == NULL) {
        cout << "\nList is empty!";
        return NULL;
    }

    if (position == 1) {  // Delete head node
        Node* todelete = head;
        head = head->next;
        delete todelete;
        return head;
    }

    Node* temp = head;
    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {  // If position is out of bounds
        cout << "\nInvalid position!";
        return head;
    }

    Node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;

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
    // Creating a linked list: 10 -> 20 -> 30 -> 40 -> 50
    Node* a = new Node(10);
    a->next = new Node(20);
    a->next->next = new Node(30);
    a->next->next->next = new Node(40);
    a->next->next->next->next = new Node(50);

    cout << "Original List:\n";
    printList(a);

    int pos;
    cout << "\nEnter position to delete: ";
    cin >> pos;

    // Delete node at given position
    a = deleteAtPosition(a, pos);

    cout << "List after deletion:\n";
    printList(a);

    return 0;
}