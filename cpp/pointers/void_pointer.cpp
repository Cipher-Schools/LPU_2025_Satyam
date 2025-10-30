#include <iostream>
using namespace std;


int main(){
    int a=10;
    double b=3.14;
    void * ptr;
    ptr=&a;
    cout<<"value of a is "<<*(int*)ptr<<endl;

    ptr=&b;
    cout<<"value of b is "<<*(double*)ptr<<endl;

    return 0;
    
}