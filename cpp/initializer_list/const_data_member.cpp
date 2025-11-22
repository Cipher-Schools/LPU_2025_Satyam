#include<iostream>
using namespace std;

// wrong if constructor is used
// class A {
//     const int x;
// public:
//     A(int x){
//         this->x=x;
//     }
// };

// correct way is to use a intializer list
class A {
    const int x;
public:
    A(int a) : x(a) {}
};

int main(){
    A a(10);
}

