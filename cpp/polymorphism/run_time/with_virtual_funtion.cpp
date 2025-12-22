#include<iostream>
using namespace std;
class Base {
public:
    virtual void show() {
        cout << "Base show\n";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived show\n";
    }
};

int main() {
    Base* b = new Derived();
    Derived* d= new Derived();
    Base* c=new Base();
    b->show();
    d->show();
    c->show();
}

