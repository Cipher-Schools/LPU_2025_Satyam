#include<iostream>
using namespace std;


int pow_1(int x, int n){
    if(n==0) return 1;
    return pow_1(x,n-1)*x;
}

int pow_2(int x, int n){
    if(n==0) return 1;
    int half_pow=pow_2(x,n/2);
    int sq=half_pow*half_pow;
    if(n%2==0) return sq;
    return sq*x;
}

int main(){
    cout<<pow_2(3,3)<<endl;
    cout<<pow_2(3,3)<<endl;

}

