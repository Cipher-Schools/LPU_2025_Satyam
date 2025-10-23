#include<bits\stdc++.h>
#include<typeinfo>
using namespace std;
int main(){
    int arr[5]={3,9,11,12,17};
    int target = 10;
    int left=0, right=4;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==target){
            cout<<" element is present ";
            return 0;
        }
        else if(arr[mid]>target){
            right= mid-1;
        }
        else left=mid+1;
    }
    cout<<" element is not found";
    
    return 0;

    
}
