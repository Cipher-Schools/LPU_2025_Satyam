#include <iostream>
#include <queue>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_front(5);
    dq.push_back(3);
    dq.push_front(6);
    dq.push_back(8);
    cout<<"front element is "<<dq.front()<<endl;
    cout<<"back element is "<<dq.back()<<endl;
}
