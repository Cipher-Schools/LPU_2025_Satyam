#include<iostream>
using namespace std;

// multilevel inheritance

class A{
    public:
    A(){
        cout<<"this is class A"<<endl;
    }
};
class B: public A{
    public:
    B(){
        cout<<"this is class B"<<endl;
    }
};
class C: public B{
    public:
    C(){
        cout<<"this is class C"<<endl;
    }

};

int main(){
    C c;
}