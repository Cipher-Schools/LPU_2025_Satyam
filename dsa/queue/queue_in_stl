#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Enqueue elements
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl; // 10
    cout << "Back: "  << q.back()  << endl; // 30

    // Dequeue
    q.pop(); // removes 10

    cout << "After pop, new front: " << q.front() << endl; // 20

    // Size
    cout << "Size: " << q.size() << endl;

    // Check empty
    if (q.empty())
        cout << "Queue is empty\n";
    else
        cout << "Queue is NOT empty\n";

    return 0;
}
