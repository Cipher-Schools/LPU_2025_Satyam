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


int main() {
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = nullptr;

    // traversal
    ll_traversal(head);

    return 0;
    
    
}
