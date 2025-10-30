#include <iostream>
using namespace std;

void print1ton(int n){
    // base case
    if(n==1) {
        cout<<1;
        return ;
    }
    // rec case
    print1ton(n-1);
    cout<<n;
}

int main(){
    print1ton(5);
    
}