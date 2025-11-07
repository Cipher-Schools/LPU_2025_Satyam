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

class LinkedList {
    Node* head;

public:
    LinkedList(){
        head=NULL;
    }

    // Insert at the end
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

    // Delete from beginning
    void deleteFromBeginning() {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    //  Delete from end
    void deleteFromEnd() {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }
        if (!head->next) { // only one node
            delete head;
            head = nullptr;
            return;
        }
        Node* prev = nullptr;
        Node* curr = head;
        while (curr->next) {
            prev = curr;
            curr = curr->next;
        }
        prev->next = nullptr;
        delete curr;
    }

    // Delete at given position (1-indexed)
    void deleteAtPosition(int pos) {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }
        if (pos <= 0) {
            cout << "Invalid position" << endl;
            return;
        }
        if (pos == 1) {
            deleteFromBeginning();
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;
        for (int i = 1; temp && i < pos; i++) {
            prev = temp;
            temp = temp->next;
        }

        if (!temp) {
            cout << "Invalid position" << endl;
            return;
        }

        prev->next = temp->next;
        delete temp;
    }

    // Display list
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
    LinkedList list;
    int choice, val, pos;

    while (true) {
        cin >> choice;
        switch (choice) {
        case 1: // Insert at end
            cin >> val;
            list.insertAtEnd(val);
            break;
        case 2: // Delete from beginning
            list.deleteFromBeginning();
            break;
        case 3: // Delete from end
            list.deleteFromEnd();
            break;
        case 4: // Delete at position
            cin >> pos;
            list.deleteAtPosition(pos);
            break;
        case 5: // Display
            list.display();
            break;
        case 6: // Exit
            return 0;
        default:
            cout << "Wrong choice" << endl;
        }
    }
}
