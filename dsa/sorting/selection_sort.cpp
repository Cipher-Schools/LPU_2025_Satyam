#include <iostream>
using namespace std;
int main(){
    int n=10;
    int arr[n]={10,11,7,6,5,4,3,2,1,1};
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mini]) mini=j;

        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}