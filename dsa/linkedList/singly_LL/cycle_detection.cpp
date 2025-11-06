#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node *detectCycle(Node *head) {
        Node* slow=head;
        Node* fast=head;
        if(fast==nullptr) return nullptr;
        else if(fast->next==nullptr) return nullptr;
        do{
            slow=slow->next;
            fast=fast->next->next;
        }
        while(slow!=fast && fast!=nullptr && fast->next!=nullptr);
        if(fast==nullptr) return nullptr;
        else if(fast->next==nullptr) return nullptr;
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
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
    third->next = second;
    Node* cycle_node= detectCycle(head);
    if(cycle_node) cout<<"yes cycle is present at "<<cycle_node->data<<endl;
    else cout<<"cycle is not present";

    return 0;
}
