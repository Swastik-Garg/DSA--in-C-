//C++ Porgram to delete a node
//from tail of the LinkedList
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

//Function to delete the node from end of the LinkedList
Node* deleteatend(Node* head) {
    if (head == NULL) {
        cout << "\nList is already empty!";
        return NULL;
    }

    if (head->next == NULL) {  // If there's only one node
        delete head;
        return NULL;
    }

    Node* temp = head;
    while (temp->next->next != NULL) {  // Traverse to second last node
        temp = temp->next;
    }

    Node* todelete = temp->next;
    temp->next = NULL;
    delete todelete;

    return head;  // Return updated head
}

//.Function to print the LinkedList
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
    a = deleteatend(a);
    cout<<"\nNew List after deletion at front is:\n";
    printlist(a);
    return 0;
}