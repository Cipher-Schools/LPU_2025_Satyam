#include <iostream>
using namespace std;
int main(){
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    for(int i=n-1;i>=0;i--){
        int no_of_swaps=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]) 
            {
                swap(arr[j], arr[j+1]);
                no_of_swaps++;
            } 
        }
        if(no_of_swaps==0) break;
    }
    
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}