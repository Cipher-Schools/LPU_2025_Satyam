#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    // constructor
    Node(int data){
        this->data=data;
        next=NULL;
        prev=NULL;
    }
};

void traversal(Node* head){
    if(!head) return;
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
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

    traversal(head);


    return 0;
}
