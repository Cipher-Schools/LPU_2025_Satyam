#include<bits\stdc++.h>
#include<typeinfo>
using namespace std;
int main(){
    int arr[5]={2,5,7,8,10};
    int target= 9;
    for(int i=0;i<5;i++){
        if(arr[i]==target) {
            cout<<" element is present";
            return 0;
        }
    }
    cout<< " element is not present";
    return 0;

    
}
