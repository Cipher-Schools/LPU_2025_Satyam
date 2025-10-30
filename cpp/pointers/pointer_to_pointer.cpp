#include <iostream>
using namespace std;


int main(){
    int x=10;
    int * ptr1=&x;
    int **ptr2=&ptr1;
    **ptr2=20;
    cout<<x;
    return 0;
    
}