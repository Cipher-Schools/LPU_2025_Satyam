#include <iostream>
using namespace std;

void printnto1(int n){
    // base case
    if(n==1) {
        cout<<1;
        return ;
    }
    // rec case
      cout<<n;
    printnto1(n-1);
  
}

int main(){
    printnto1(5);
    
}