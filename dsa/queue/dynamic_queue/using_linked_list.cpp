#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class QueueLL {
    Node *front, *rear;
public:
    QueueLL(){
        front=rear=nullptr;
    }

    // insert new node at end
    void push(int x) {
        Node* temp = new Node(x);
        if (!rear) front = rear = temp;
        else {
            rear->next = temp;
            rear = temp;
        }
        cout << x << " inserted.\n";
    }

    // delete at beginning
    void pop() {
        if (!front) {
            cout << "Queue Empty!\n";
            return;
        }
        Node* temp = front;
        cout << temp->data << " deleted.\n";
        front = front->next;
        if (!front) rear = nullptr;
        delete temp;
    }

    // traversal of queue
    void display() {
        if (!front) {
            cout << "Queue Empty!\n";
            return;
        }
        Node* temp = front;
        cout << "Queue: ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int peek(){
        if (!front) {
            cout << "Queue Empty!\n";
            return;
        }
        return front->data;

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
