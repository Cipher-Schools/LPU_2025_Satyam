#include<stack>
#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"original"<<endl;
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";
    cout<<endl;
    stack<int> st;
    for(int i=0;i<5;i++) st.push(arr[i]);
    for(int i=0;i<5;i++){
        arr[i]=st.top();
        st.pop();
    }
    cout<<"after reversal"<<endl;
     for(int i=0;i<5;i++) cout<<arr[i]<<" ";

}