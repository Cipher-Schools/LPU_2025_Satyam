#include<iostream>
#include<queue>
using namespace std;

void traversal(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
} 

void reverseQueueRec(queue<int> &q) {
    if(q.empty()) return;

    int front = q.front();
    q.pop();

    reverseQueueRec(q);

    q.push(front);
}

int main() {
    queue<int> q;
    
    // Enqueue elements
    q.push(10);
    q.push(20);
    q.push(30);
    
    cout<<"original queue"<<endl;
    traversal(q);

    reverseQueueRec(q);
    
    cout<<"after reversal"<<endl;
    traversal(q);
    return 0;
}