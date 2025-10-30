#include <iostream>
using namespace std;


int main(){
    int arr[5]={1,2,3,4,5};
    int * ptr= arr;
    cout<<*ptr<<endl;
    ptr++;
    cout<<*ptr<<endl;

    cout<<*(ptr+2)<<endl;
    return 0;
    
}