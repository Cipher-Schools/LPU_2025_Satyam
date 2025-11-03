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

Node* insert_at_end(Node* head, int val){
    Node* new_node=new Node(val);
    // check if linked list is empty
    if(!head) return new_node;

    Node* temp=head;
    while(temp->next) temp=temp->next;
    temp->next=new_node;
    new_node->prev=temp;
    return head;
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
    head= insert_at_end(head, -10);
    cout<<"after insertion"<<endl;
    traversal(head);


    return 0;
}
