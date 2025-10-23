#include<bits\stdc++.h>
#include<typeinfo>
using namespace std;
int main(){
    int arr1[5]={2,5,7,8,10};
    int arr2[5]={1,4,6,9,11};
    int arr3[10];
    int i=0; int j=0; int k=0;
    while(i<5 and j<5){
        if(arr1[i]<=arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<5){
        arr3[k]=arr1[i];
        k++; i++;
    }
    while(j<5){
        arr3[k]=arr2[j];
        k++; j++;
    }

    // traversal
    for(int i=0;i<10;i++) cout<<arr3[i]<< " ";
    return 0;

    
}
