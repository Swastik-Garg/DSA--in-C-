//Program to insert a node in last of Linkedlist

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

//Function to insert the node at end of the :LinkedList
Node* insertatlast(Node* head,int data){
    Node* new_node = new Node(data);
    Node* last = head;
    while(last->next != NULL){
        last = last->next;
    }
    last->next = new_node;
    return head;

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
    int data = 16;
    insertatlast(a,data);
    cout<<"\nNew List after insertion at last is:\n";
    printlist(a);
    return 0;
}