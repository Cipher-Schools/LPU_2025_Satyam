#include <iostream>
using namespace std;
int main(){
    int n=10;
    int arr[n]={10,11,7,6,5,4,3,2,1,1};
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
    
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}