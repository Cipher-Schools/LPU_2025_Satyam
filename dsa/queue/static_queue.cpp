#include <iostream>
using namespace std;
#define n 5 //fixed maximum size of queue


class Queue {
    int arr[n];
    int front, rear, count;

public:
    Queue(int size) {
        front = 0;
        rear = -1;
        count = 0;
    }

    ~Queue() {
        delete[] arr;
    }

    bool isFull() {
        return count == n;
    }

    bool isEmpty() {
        return count == 0;
    }

    void push(int x) {
        if (isFull()) {
            cout << "Queue overflow\n";
            return;
        }
        // % used to make this queue circular
        rear = (rear + 1) % n;
        arr[rear] = x;
        count++;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Queue underflow\n";
            return;
        }
        front = (front + 1) % n;
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

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.peek() << endl;

    q.pop();
    cout << "Front after dequeue: " << q.peek() << endl;

    q.push(40);
    q.push(50);
    q.push(60);

    cout << "Queue size: " << q.size() << endl;
}
