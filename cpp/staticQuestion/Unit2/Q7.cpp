#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;

    void updateLength(int factor) {
        int Rectangle::*ptr = &Rectangle::length;
        this->*ptr = this->*ptr * factor; 
    }

    // setter
    void setLengthWidth(int length, int width){
        this->length=length;
        this->width=width;
    }

    // getter
    void display() {
        cout << length;
    }
};

int main() {
    int l, w, factor;
    cin >> l >> w;
    cin>>factor;

    Rectangle r;
    r.setLengthWidth(l,w);

    r.updateLength(factor);
    r.display();

    return 0;
}
