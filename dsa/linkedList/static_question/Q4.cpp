#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
    Node(int val){
        data=val;
        prev=next=NULL;
    }
};

class DoublyLinkedList {
    Node* head;
public:
    DoublyLinkedList(){
        head=NULL;
    }

    // Insert at end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }

    // Insert at given position (1-indexed)
    void insertAtPosition(int val, int pos) {
        Node* newNode = new Node(val);
        if (pos <= 0) {
            cout << "Invalid position" << endl;
            delete newNode;
            return;
        }

        // Insert at head
        if (pos == 1) {
            newNode->next = head;
            if (head)
                head->prev = newNode;
            head = newNode;
            return;
        }

        Node* temp = head;
        for (int i = 1; temp && i < pos - 1; i++)
            temp = temp->next;

        if (!temp) {
            cout << "Invalid position" << endl;
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        if (temp->next)
            temp->next->prev = newNode;

        temp->next = newNode;
        newNode->prev = temp;
    }

    // Display the list
    void display() {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;

    DoublyLinkedList list;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        list.insertAtEnd(val);
    }

    int choice;
    cin >> choice;

    switch (choice) {
        case 1: { // Insert at end
            int val;
            cin >> val;
            list.insertAtEnd(val);
            list.display();
            break;
        }
        case 2: { // Insert at given position
            int val, pos;
            cin >> val >> pos;
            list.insertAtPosition(val, pos);
            list.display();
            break;
        }
        case 3: { // Display
            list.display();
            break;
        }
        default:
            cout << "Wrong choice" << endl;
    }

    return 0;
}
