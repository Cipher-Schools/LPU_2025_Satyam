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

// function to delete a node at beginning
Node* delete_from_beginning(Node* head) {
    Node* temp=head->next;
    head->next=NULL;
    delete head;
    return temp;
    
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

// function to insert a new node at end
Node* delete_node_with_value(Node* head, int target) {
    if(!head) return NULL;

    // search the target node
    Node* prev= new Node;  
    prev->data=-1;
    prev->next=head;
    Node* curr=head;
    while(curr!=NULL && curr->data!=target){
        prev=prev->next;
        curr=curr->next;
    }
    
    // check if target node is head, use delete from beginning function
    if(curr==head) return delete_from_beginning(head);
    // check if target node is tail, use delete from end function
    if(curr->next==NULL) return deleteFromEnd(head);

    // if target node is neither head nor tail
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
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
    cout<<"before deletion"<<endl;
    ll_traversal(head);
    cout<<endl;
    cout<<"after deletion"<<endl;
    head=delete_node_with_value(head,20);
    ll_traversal(head);
    
    
}
