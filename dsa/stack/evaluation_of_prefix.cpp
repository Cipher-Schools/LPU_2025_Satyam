#include <iostream>
#include <stack>
using namespace std;

int apply(int a, int b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    if (op == '/') return a / b;
    return 0;
}

int evaluatePrefix(string exp) {
    stack<int> st;

    for (int i = exp.length() - 1; i >= 0; i--) {
        char c = exp[i];

        if (isdigit(c)) {
            st.push(c - '0');
        } else {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            st.push(apply(a, b, c));
        }
    }
    return st.top();
}

int main() {
    string exp = "-+7*45+20";
    cout << evaluatePrefix(exp);
}
