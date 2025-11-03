#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data=data;
        next=NULL;
        prev=NULL;
    }
};

void traversal(Node* head){
    if(!head) return;
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

// function to insert a node at beginning
Node* insert_at_beginning(Node* head, int val){
    Node* new_node=new Node(val);
    if(!head) return new_node;
    new_node->next=head;
    head->prev=new_node;
    return new_node;
}



int main() {
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    head->next = second;
    head->prev=NULL;

    second->next = third;
    second->prev=head;

    third->next = nullptr;
    third->prev=second;
    
    cout<<"before insertion"<<endl;
    traversal(head);
    head= insert_at_beginning(head, -10);
    cout<<"after insertion"<<endl;
    traversal(head);


    return 0;
}
