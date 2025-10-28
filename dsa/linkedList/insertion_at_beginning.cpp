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
Node* insertAtBeginning(Node* head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = head;
    return newNode; // new head
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
    cout<<"after insertion"<<endl;
    head=insertAtBeginning(head,-10);
    ll_traversal(head);
    
    
}
