#include<iostream>
using namespace std;

class Counter {
    int value;
public:
    // initializer list
    Counter(int v=0) : value(v) {}
    // pre increment
    Counter operator++() {
        ++value;
        return *this;
    }
    // post increment
    Counter operator++(int) {
        Counter temp=*this;
        value++;
        return temp;
    }
    void show() { cout << value << endl; }
};

int main(){
    Counter c1,c2;
    c2=++c1;
    c1.show();
    c2.show();
    c2=c1++;
    c1.show();
    c2.show();
    return 0;
}
