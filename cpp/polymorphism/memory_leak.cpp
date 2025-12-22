#include<iostream>
using namespace std;
// 1. forgetting delete

void leak(){
    int *p=new int[10];
    // p lost->never freed
}

void no_leak(){
    int *p=new int[10];
    delete p;
    // no leak
}
// rule: every new->exactly one delete

// 2. missing virtual destructor
class Base {
public:
    ~Base() { cout << "Base destroyed\n"; }
};

// correct way is to use a virtual destructor

class Derived : public Base {
    int* data = new int(5);
public:
    ~Derived() {
        delete data;
        cout << "Derived destroyed\n";
    }
};

int main() {
    Base* b = new Derived();
    delete b;   
}

// 3. overwriting pointers
void leak(){
    int* p = new int(10);
    p = new int(20);   // address of old p is lost, memory leak
    delete p;

}

void no_leak(){
    int* p = new int(10);
    delete p;
    p = new int(20);
    delete p;

}