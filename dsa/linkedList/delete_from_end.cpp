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

// function to delete a node at end
Node* deleteFromEnd(Node* head) {
    if(head == nullptr || head->next == nullptr)
        return nullptr;

    Node* temp = head;
    while(temp->next->next != nullptr)
        temp = temp->next;

    delete temp->next;
    temp->next = nullptr;
    return head;
}



int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // current linked list is 10->20->30

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = nullptr;
    cout<<"before insertion"<<endl;
    ll_traversal(head);
    cout<<endl;
    cout<<"after deletion"<<endl;
    head=deleteFromEnd(head);
    ll_traversal(head);
    
    
}
