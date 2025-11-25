#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

Node* detectCycleStart(Node* head) {
    Node *slow = head, *fast = head;

    // Step 1: Detect cycle
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) break;
    }

    if (!fast || !fast->next) 
        return nullptr;  // No cycle

    // Step 2: Find start node of cycle
    slow = head;          // Move slow to head
    while (slow != fast) { // Move both 1 step
        slow = slow->next;
        fast = fast->next;
    }

    return slow;  // Starting point of cycle
}

int main() {
    // Creating a test list with a cycle
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Creating a cycle: 5 -> 3
    head->next->next->next->next->next = head->next->next;

    Node* cycleStart = detectCycleStart(head);

    if (cycleStart)
        cout << "Cycle starts at node with value: " << cycleStart->data << endl;
    else
        cout << "No cycle found." << endl;

    return 0;
}
