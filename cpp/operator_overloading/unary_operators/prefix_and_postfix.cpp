#include<iostream>
using namespace std;

class Counter {
    int value;
public:
    // initializer list
    Counter(int v=0) : value(v) {}
    // pre increment
    void operator++() {
        ++value;
    }
    // post increment
    void operator++(int) {
        value++;
    }
    void show() { cout << value << endl; }
};

int main(){
    Counter c;
    c.show();
    c++;
    c.show();
    ++c;
    c.show();
    return 0;
}
