#include <iostream>
#include <queue>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(2);
    dq.push_front(1);

    while(dq.size()>1){
        if(dq.front()!=dq.back()) {
            cout<<"no"<<endl;
            return 0;
        }
        else{
            dq.pop_back();
            dq.pop_front();
        }
    }
    cout<<"yes";
    return 0;
    
}
