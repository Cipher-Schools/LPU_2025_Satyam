#include<iostream>
using namespace std;
class Box {
public:
    int length;
};

int main() {
    int Box::*ptr = &Box::length; 
    Box b;
    b.length = 30;
    cout << b.*ptr<<endl; 

    // if object is a pointer
    // Box *b1= &b;
    // b1->length=50;
    // cout<<b1->*ptr;
}
