// problem statement
// we have to reverse the array using stack
#include<iostream>
#include<stack>
using namespace std;

void display(int arr[], int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"original"<<endl;
    display(arr, 5);
    stack<int> st;
    for(int i=0;i<5;i++) st.push(arr[i]);
    for(int i=0;i<5;i++){
        arr[i]=st.top();
        st.pop();
    }
    cout<<"after reversal"<<endl;
    display(arr, 5);
    return 0;
}