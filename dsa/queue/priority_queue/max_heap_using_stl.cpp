#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;              // Max heap by default
    pq.push(10);
    pq.push(9);
    pq.push(11);
    pq.push(20);

    cout<<"top element is "<<pq.top()<<endl;

    pq.pop();
    cout<<"top element is "<<pq.top()<<endl;
}
