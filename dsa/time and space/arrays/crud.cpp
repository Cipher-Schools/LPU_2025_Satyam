#include <iostream>
using namespace std;
int main(){
    // int n=6;
    // int arr[6]={5,4,6,7,8};
    // for(int i=5;i>2;i--){
    //     arr[i]=arr[i-1];
    // }
    // arr[2]=10;

    // for(int i=0;i<6;i++) cout<<arr[i]<<" ";
//    insert in between

    // int arr[6]={9,7,8,2,5};
    // int pos=3;
    // int element=10;
    // for(int i=5;i>3;i--){
    //     arr[i]=arr[i-1];
    // }
    // arr[3]=10;
    // for(int i=0;i<6;i++){
    //     cout<<arr[i]<<" ";
    // }
    int n=5;
    int arr[n]={3,5,6,4,8};
    int pos=2;
    for(int i=pos;i<n-1;i++) 
    arr[i]=arr[i+1];
    n--;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
   
    return 0;
}
