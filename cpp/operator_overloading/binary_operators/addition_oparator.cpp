#include<iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r, int i) : real(r), imag(i) {}

    Complex operator+(Complex c) {
        Complex temp = Complex(real+c.real, imag+c.imag);
        return temp;
    }

    void show() {
        cout << real << " + " << imag << "i\n";
    }
};

int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    Complex c3=c1+c2;
    c3.show();
    return 0;
}
