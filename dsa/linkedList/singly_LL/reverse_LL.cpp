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
    cout<<endl;
}

// reverse function
Node* reverse_LL(Node* head){
    if(!head) return head;
        Node *prev=NULL;
        Node *curr=head;
        Node *next=head->next;
        while(curr){
            curr->next=prev;
            prev=curr;
            curr=next;
            if(next) next=next->next;
        }
        return prev;
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
    cout<<"before reverseal"<<endl;
    ll_traversal(head);
    cout<<"after reversal"<<endl;
    head=reverse_LL(head);
    ll_traversal(head);

    return 0;
    
    
}
