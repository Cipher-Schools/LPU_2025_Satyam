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

Node* deleteAtEnd(Node* head) {
    if (!head) return nullptr;
    if (!head->next) {
        delete head;
        return nullptr;
    }
    Node* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->prev->next = nullptr;
    delete temp;
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
    
    cout<<"before deletion"<<endl;
    traversal(head);
    head= deleteAtEnd(head);
    cout<<"after deletion"<<endl;
    traversal(head);


    return 0;
}
