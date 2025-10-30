#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// traversal function
void ll_traversal(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }

}
// function to insert a new node at beginning
void insertAtMiddle(Node* target, int value) {
    Node * newNode= new Node;
    newNode->data=value;
    newNode->next=target->next;
    target->next=newNode;
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
    cout<<"before insertion"<<endl;
    ll_traversal(head);
    insertAtMiddle(second, 0);
    cout<<"after insertion"<<endl;
    ll_traversal(head);
    
    
}
