#include <iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={3,4,8,9,12};
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]) {
            cout<<" array is not sorted";
            return 0;
        }
    }
    cout<<"array is sorted";
    
    return 0;
}