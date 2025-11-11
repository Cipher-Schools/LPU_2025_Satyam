#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

class Stack {
    Node* top;  //head of the linked list

public:
    Stack() { top = nullptr; }

    void push(int val) {
        Node* temp = new Node(val);
        temp->next = top;
        top = temp;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << "Popped: " << top->data << endl;
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek(){
        if (top == nullptr) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return top->data;
    }

    bool is_empty(){
        return top==NULL;
    }

    void display() {
        Node* temp = top;
        cout << "Stack: ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(5); s.push(10); s.push(15);
    s.display();
    s.pop();
}
