// implement a stack which can tell you the min element in O(1) time

#include <iostream>
#include <stack>
using namespace std;

class MinStack {
    stack<int> mainStack, minStack;

public:
    void push(int val) {
        mainStack.push(val);
        if (minStack.empty() || val <= minStack.top())
            minStack.push(val);
    }

    void pop() {
        if (mainStack.top() == minStack.top())
            minStack.pop();
        mainStack.pop();
    }

    int top() { return mainStack.top(); }
    int getMin() { return minStack.top(); }
};

int main() {
    MinStack s;
    s.push(5); s.push(3); s.push(7); s.push(2);
    cout << "Current Min: " << s.getMin() << endl;
    s.pop();
    cout << "After pop Min: " << s.getMin() << endl;
}
