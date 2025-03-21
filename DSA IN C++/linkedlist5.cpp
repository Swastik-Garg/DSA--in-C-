//C++ Porgram to delete a node
//from front of the LinkedList
#include<iostream>
using namespace std;

class Node{
   public:
   int data;
   Node*next;
   Node(int data){
    this->data = data;
    this->next = NULL;
   }
};

// Function to delete head node and return new head
Node* deleteathead(Node* head) {
    if (head == NULL) {
        cout << "\nList is already empty!";
        return NULL;
    }
    Node* todelete = head;
    head = head->next;
    delete todelete;
    return head;  // Return new head
}

//Function to print the LinkedList
void printlist(Node* head){
    Node* curr = head;
    while(curr != NULL){
        cout<<curr->data<<"->";
        curr = curr->next;
        }
    cout<<"NULL";
}

int main(){
    Node* a = new Node(10); //Acting as a head
    a->next = new Node(20);
    a->next->next = new Node(30);
    a->next->next->next = new Node(40);
    cout<<"Original List:\n";
    printlist(a);
    a = deleteathead(a);
    cout<<"\nNew List after deletion at front is:\n";
    printlist(a);
    return 0;
}