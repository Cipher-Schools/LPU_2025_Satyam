#include<bits\stdc++.h>
#include<typeinfo>
using namespace std;
int main(){
    int arr[3][2]={
        {3,4},
        {4,5},
        {7,6}
    };
    int target=9;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]==target){
                cout<<" element is present ";
                return 0;
            }
        }

    }
    cout<<"element is not present";
    
    return 0;

    
}
