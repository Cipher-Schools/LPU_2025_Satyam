#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};



int main() {
    //creating node statically
    Node newNode;
    newNode.data=20;
    newNode.next=nullptr;
    // accessing the data of node
    cout<<newNode.data<<endl;

    // creating node dynamically
    Node* node= new Node;
    node->data=10;
    node->next=nullptr;
    // accessing the data of the node
    cout<<node->data;
    return 0;

    
}
