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

Node* deleteAtBeginning(Node* head) {
    if (!head) return nullptr;
    Node* temp = head;
    head = head->next;
    if (head) head->prev = nullptr;
    delete temp;
    return head;
}
// 0 based index
Node* deleteAtIndex(Node* head, int index) {
    if (!head) return nullptr;
    if (index == 0)
        return deleteAtBeginning(head);

    Node* temp = head;
    for (int i = 0; temp && i < index; i++)
        temp = temp->next;

    if (!temp) return head;  // Invalid index

    if (temp->next)
        temp->next->prev = temp->prev;
    if (temp->prev)
        temp->prev->next = temp->next;

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
    head= deleteAtIndex(head,2);
    cout<<"after deletion"<<endl;
    traversal(head);


    return 0;
}
