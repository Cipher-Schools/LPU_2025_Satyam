/*
problem statement:
Design a system to calculate the area of different shapes.

requirements:
Create an abstract class Shape
It should have a pure virtual function area()
Create derived classes:
Rectangle
Circle
Use base class pointer to call area()
*/ 

#include <bits/stdc++.h>
using namespace std;

class Shape {
public:
    virtual int area() = 0;  // abstraction
};

class Rectangle : public Shape {
    int l, b;
public:
    Rectangle(int l, int b) : l(l), b(b) {}
    int area() {
        return l * b;
    }
};

class Circle : public Shape {
    int r;
public:
    Circle(int r) : r(r) {}
    int area() {
        return 3.14 * r * r;
    }
};

int main() {
    Shape* s1 = new Rectangle(5, 4);
    Shape* s2 = new Circle(3);

    cout << s1->area() << endl;
    cout << s2->area() << endl;

    delete s1;
    delete s2;
}