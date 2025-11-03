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
Node* insert_at_pos(Node* head, int target, int val){
    
    // check if linked list is empty
    if(!head) return NULL;

    Node* temp=head;
    while(temp && temp->data!=target) temp=temp->next;
    // if target is not found
    if(!temp) return head;
    
    // if target node is tail then insert at end code
    
    Node* new_node=new Node(val);
    Node* next=temp->next;
    temp->next=new_node;
    new_node->prev=temp;
    new_node->next=next;
    next->prev=new_node;
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
    head= insert_at_pos(head, 10,-10);
    cout<<"after insertion"<<endl;
    traversal(head);


    return 0;
}
