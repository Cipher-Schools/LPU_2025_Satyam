#include<iostream>
using namespace std;


int main(){
    int x=0;
    // pre increment, increments before return
    int y=++x;
    cout<<"x is "<<x<<" y is "<<y<<endl;
    // post increment, increments after return
    y=x++;
    cout<<"x is "<<x<<" y is "<<y<<endl;
    return 0;
}
