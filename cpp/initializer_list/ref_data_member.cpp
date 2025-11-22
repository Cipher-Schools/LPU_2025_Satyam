#include<iostream>
using namespace std;

// wrong if constructor is used
// class A {
//      int &ref;
// public:
//     A(int &r){
//         ref=r;
//     }
// };

// correct way is to use a intializer list
class A {
    int &ref;
public:
    A(int &r) : ref(r) {}
};


int main(){
    int x=20;
    A a(x);
}

