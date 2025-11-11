// check is an array is palindromic using stack
#include<iostream>
#include<stack>
using namespace std;

bool is_palindrome(int arr[], int n){
    stack<int> st;
    for(int i=0;i<5;i++) st.push(arr[i]);
    for(int i=0;i<5;i++){
        if(arr[i]==st.top()) st.pop();
        else return false;
    }
    return true;

}

int main(){
    int arr[5]={1,2,3,2,1};
    if(is_palindrome(arr, 5)) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    
    return 0;
}