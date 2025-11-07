#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
    }
};

// Function to create circular linked list
Node* createCircularList(int arr[], int n) {
    if (n == 0) return nullptr;

    Node* head = new Node(arr[0]);
    Node* tail = head;

    for (int i = 1; i < n; i++) {
        tail->next = new Node(arr[i]);
        tail = tail->next;
    }

    tail->next = head; // Make it circular
    return head;
}

// Function to delete last node of circular linked list
Node* deleteAtEnd(Node* head) {
    if (!head) return nullptr;
    if (head->next == head) { // only one node
        delete head;
        return nullptr;
    }

    Node* curr = head;
    Node* prev = nullptr;

    while (curr->next != head) {
        prev = curr;
        curr = curr->next;
    }

    prev->next = head; // last node removed
    delete curr;

    return head;
}

// Function to display circular list
void display(Node* head) {
    if (!head) return;
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    Node* head = createCircularList(arr, n);
    head = deleteAtEnd(head);
    display(head);

    return 0;
}
