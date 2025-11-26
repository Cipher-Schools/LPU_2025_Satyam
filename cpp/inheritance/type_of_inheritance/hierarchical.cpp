#include<iostream>
using namespace std;

// hierarchical inheritance
class Quadrilateral {
public:
    void show_sides() { cout << "4 sides"<<endl; }
};

class Rectangle : public Quadrilateral {};
class Circle : public Quadrilateral {};

int main(){
    Rectangle r;
    Circle c;
    r.show_sides();
    c.show_sides();
    
    
}