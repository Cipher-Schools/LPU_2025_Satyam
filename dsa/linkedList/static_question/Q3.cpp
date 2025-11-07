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

    // Search for membership number
    bool search(int key) {
        Node* temp = head;
        while (temp) {
            if (temp->data == key)
                return true;
            temp = temp->next;
        }
        return false;
    }
};

int main() {
    int N;
    cin >> N;

    LinkedList list;
    for (int i = 0; i < N; i++) {
        int val;
        cin >> val;
        list.insertAtEnd(val);
    }

    int M;
    cin >> M;

    if (list.search(M))
        cout << "Membership number " << M << " is active" << endl;
    else
        cout << "Membership number " << M << " is not in the list" << endl;

    return 0;
}
