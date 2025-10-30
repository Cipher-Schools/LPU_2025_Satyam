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

// function to insert a new node at end when only head is given
Node* insertAtEndWithHead(Node* head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = nullptr;

    if(head == nullptr) return newNode;
    // calculation of tail
    Node* temp = head;
    while(temp->next != nullptr)
        temp = temp->next;
    temp->next = newNode;
    return head;
}

// function to insert a new node at end when both head and tail are given
pair<Node*, Node*> insertAtEndWithHeadAndTail(Node* head, Node* tail, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = nullptr;
    if(head==NULL) return {newNode, newNode};
    tail->next= newNode;
    tail=newNode;
    return {head, tail};
}



int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* tail = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = tail;

    tail->data = 30;
    tail->next = nullptr;

    cout<<"before insertion"<<endl;
    ll_traversal(head);
    cout<<endl;

    cout<<"after insertion using head only"<<endl;
    head=insertAtEndWithHead(head,-10);
    ll_traversal(head);
    cout<<endl;

    // cout<<"after insertion using head and tail"<<endl;
    // auto headAndTail= insertAtEndWithHeadAndTail(head, tail, -20);
    // head=headAndTail.first;
    // tail=headAndTail.second;
    // ll_traversal(head);

    return 0;
    
    
}
