#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class QueueLL {
    Node *head, *tail;
public:
    QueueLL(){
        head=tail=nullptr;
    }

    // insert new node at end
    void push(int x) {
        Node* temp = new Node(x);
        if (!tail) head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        cout << x << " inserted.\n";
    }

    // delete at beginning
    void pop() {
        if (!head) {
            cout << "Queue Empty!\n";
            return;
        }
        Node* temp = head;
        cout << temp->data << " deleted.\n";
        head = head->next;
        if (!head) tail = nullptr;
        delete temp;
    }

    // traversal of queue
    void display() {
        if (!head) {
            cout << "Queue Empty!\n";
            return;
        }
        Node* temp = head;
        cout << "Queue: ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int peek(){
        if (!head) {
            cout << "Queue Empty!\n";
            return -1;
        }
        return head->data;

    }
};

int main() {
    QueueLL q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.display();
    q.pop();
    q.display();
}
