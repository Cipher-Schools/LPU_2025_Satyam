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
Node* delete_from_beginning(Node* head) {
    Node* temp=head->next;
    head->next=NULL;
    delete head;
    return temp;
    
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
    cout<<"after deletion"<<endl;
    head=delete_from_beginning(head);
    ll_traversal(head);


    
    
    
}
