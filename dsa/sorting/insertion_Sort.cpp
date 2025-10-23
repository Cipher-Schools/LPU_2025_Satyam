#include <iostream>
using namespace std;
int main(){
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            cout<<"running"<<endl;
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}