#include <iostream>
#include <queue>
using namespace std;

bool is_palindrome(vector<int>&arr){
    int n=arr.size();
    deque<int> dq;
    for(int i=0;i<n;i++) dq.push_front(arr[i]);
    while(dq.size()>1){
        if(dq.front()!=dq.back()) return false;
        dq.pop_back();
        dq.pop_front();
    }
    return true;
}

int main() {
    vector<int> arr={1,2,3,2,1};
    if(is_palindrome(arr)) cout<<"yes";
    else cout<<"no";
    return 0;
    
}
