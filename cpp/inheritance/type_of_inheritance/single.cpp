#include<iostream>
using namespace std;

// single inheritance
class Vehicle {
public:
    void run() { cout << "Vehicle running\n"; }
};

class Car : public Vehicle {
};



int main(){
    Car c;
    c.run();
}