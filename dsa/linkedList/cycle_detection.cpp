#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

bool isCycle(Node* head){
    if(head==NULL || head->next==NULL) return false;
    Node * hare=head;
    Node *tortoise =head;

    while(hare!=NULL && hare->next!=NULL){
        hare= hare->next->next;
        tortoise=tortoise->next;
        if(hare==tortoise) return true;
    }
    return false;
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

    if(isCycle(head)) cout<<"yes cycle is present"<<endl;
    else cout<<"cycle is not present";

    return 0;
}
