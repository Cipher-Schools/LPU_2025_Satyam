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

// crating linked list class having insert operations as members
class LinkedList {
    Node* head;
public:
    LinkedList(){
        head=NULL;
    }

    // Insert at beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
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
    }

    // Insert at given position (1-indexed)
    void insertAtPosition(int val, int pos) {
        if (pos <= 0) {
            cout << "Invalid position" << endl;
            return;
        }

        if (pos == 1) {
            insertAtBeginning(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;
        for (int i = 1; temp && i < pos - 1; i++)
            temp = temp->next;

        if (!temp) {
            cout << "Invalid position" << endl;
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Print list
    void printList() {
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
    LinkedList list;
    int choice, val, pos;

    while (true) {
        cin >> choice;
        switch (choice) {
        case 1:
            cin >> val;
            list.insertAtBeginning(val);
            break;
        case 2:
            cin >> val;
            list.insertAtEnd(val);
            break;
        case 3:
            cin >> val >> pos;
            list.insertAtPosition(val, pos);
            break;
        case 4:
            list.printList();
            break;
        case 5:
            return 0;
        default:
            cout << "Wrong choice" << endl;
        }
    }

    return 0;
}
