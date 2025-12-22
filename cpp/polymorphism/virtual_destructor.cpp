#include<iostream>
using namespace std;
class Base {
public:
    virtual ~Base() {
        cout << "Base Destructor\n";
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived Destructor\n";
    }
};

int main(){
Base* b = new Derived();
delete b;
}

