//Program to insert a node at front of Linkedlist

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

//Function to insert the node at front of the LinkedList
Node* insertatfirst(Node* &head, int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head =  newNode;   
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
    int data = 16; //Act as a head after function calling
    insertatfirst(a,data);
    cout<<"\nNew List after insertion at front is:\n";
    printlist(a);
    return 0;
}