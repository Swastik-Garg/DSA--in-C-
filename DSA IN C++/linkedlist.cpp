//Program to create a node in Linkedlist

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

int main(){
    Node*a = new Node(10);
    cout<<a->data<<" "<<a->next;
    return 0;
}