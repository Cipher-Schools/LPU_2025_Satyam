#include <iostream>
using namespace std;
struct Node{
    int val;
    Node* next;
    Node(int value){
        val=value;
    }
};

int main(){
    Node listNode(10);
    cout<<listNode.val;
    return 0;
    
}