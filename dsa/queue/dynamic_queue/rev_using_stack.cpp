#include <iostream>
#include <queue>
#include <stack>
using namespace std;


void traversal(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

void rev_using_stack(queue<int> &q){
    stack<int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

}

int main() {
    queue<int> q;
    
    // Enqueue elements
    q.push(10);
    q.push(20);
    q.push(30);
    
    cout<<"original queue"<<endl;
    traversal(q);

    rev_using_stack(q);
    
    cout<<"after reversal"<<endl;
    traversal(q);
    return 0;
}
