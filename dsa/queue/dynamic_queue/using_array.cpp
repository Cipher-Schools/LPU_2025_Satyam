#include <iostream>
using namespace std;

// size of the queue can grow dynamically since we used dynamic array
class Queue {
    int *arr;
    int front, rear, capacity, count;

public:
    Queue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = 0;
        rear = -1;
        count = 0;
    }

    ~Queue() {
        delete[] arr;
    }

    bool isFull() {
        return count == capacity;
    }

    bool isEmpty() {
        return count == 0;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue overflow\n";
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = x;
        count++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue underflow\n";
            return;
        }
        front = (front + 1) % capacity;
        count--;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    int size() {
        return count;
    }
};

int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.peek() << endl;

    q.dequeue();
    cout << "Front after dequeue: " << q.peek() << endl;

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    cout << "Queue size: " << q.size() << endl;
}
