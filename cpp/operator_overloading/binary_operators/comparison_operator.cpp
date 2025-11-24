#include<iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r, int i) : real(r), imag(i) {}

    bool operator==(Complex c) {
        if(real==c.real && imag==c.imag) return true;
        return false;
    }

    void show() {
        cout << real << " + " << imag << "i\n";
    }
};

int main(){
    Complex c1(1,2);
    Complex c2(2,2);
    if(c1==c2) cout<<"both are equal";
    else cout<<"both are not equal";
    return 0;
}
