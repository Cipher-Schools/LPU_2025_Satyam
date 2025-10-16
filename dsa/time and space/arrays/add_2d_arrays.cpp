#include<bits\stdc++.h>
#include<typeinfo>
using namespace std;
int main(){
    int arr1[3][3]={
        {3,4,7},
        {4,5,1},
        {7,6,2}
    };
      int arr2[3][3]={
        {-3,-4,-7},
        {-4,-5,-1},
        {-7,-6,-2}
    };
    
    int arr3[3][3];
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    arr3[i][j]=arr1[i][j]+arr2[i][j];

     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;

     }
    
    
    
    return 0;

    
}
