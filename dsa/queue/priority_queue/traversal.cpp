#include <iostream>
#include <queue>
using namespace std;

void traversal(priority_queue<int> pq){
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}

int main() {
    priority_queue<int> pq;              // Max heap by default
    pq.push(10);
    pq.push(9);
    pq.push(11);
    pq.push(20);
    
    traversal(pq);
}
