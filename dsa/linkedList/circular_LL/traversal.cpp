#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// function to make the singly linked list circular
void make_circular(Node* head){
    if(!head) return;
    Node* temp=head;
    while(temp->next) temp=temp->next;
    temp->next=head;
}

// traversal of circular linked list
void traversal(Node* head){
    Node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=head);
}



int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = nullptr;

    // make circular
    make_circular(head);
    traversal(head);
    


    return 0;
}
