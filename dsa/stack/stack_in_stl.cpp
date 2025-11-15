#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    // Push elements
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << endl; // 30

    // Pop element
    st.pop();  // removes 30
    cout << "After pop, top: " << st.top() << endl; // 20

    // Size
    cout << "Size: " << st.size() << endl;

    // Check empty
    if (st.empty())
        cout << "Stack is empty\n";
    else
        cout << "Stack is NOT empty\n";

    return 0;
}
