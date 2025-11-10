#include <iostream>
#include<stack>
using namespace std;

class Stack{
    // private data members
    int arr[5];
    int top;

    public:
    Stack(){
        top=-1;
    }

    // push method
    void push(int x){
        if(top==4){
            cout<<"stack overflow";
            return;
        }
        top++;
        arr[top]=x;
    }

    // pop method
    void pop(){
        if(top==-1){
            cout<<"stack underflow";
            return;
        }
        top--;
    }

    // peek method
    int peek(){
        if(top==-1){
        cout<<"stack is empty"<<endl;
        return -1;
    }
        return  arr[top];
    }

    // is_empty method
    bool is_empty(){
        if(top==-1) return true;
        return false;
    }


};



int main(){
    // Stack st;
    // st.push(5);
    // st.push(10);
    // cout<<endl;
    // cout<<st.peek();
    stack<int> st;
    st.push(5);
    st.push(10);
    st.top();
    st.empty();
    return 0;
}