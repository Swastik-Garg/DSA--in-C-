//C++ Program to reverse 
//the singly linkedlist

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
}

Node* reverselist(Node* head){
    Node* curr = head;
    Node* next =  NULL;
    Node* prev = NULL;
    whiel(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr= next;
    }
    return prev;
}