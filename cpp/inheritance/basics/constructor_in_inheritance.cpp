#include<iostream>
using namespace std;

// base class contructor runs before derived class
class Base {
public:
    Base() { cout << "Base Constructor\n"; }
};

class Derived : public Base {
public:
    Derived() { cout << "Derived Constructor\n"; }
};


int main(){
    Derived d;

}