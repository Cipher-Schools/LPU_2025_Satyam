// overload unary - to invert the sign of a data members of a object
#include<iostream>
using namespace std;

class Point{
    int x;
    int y;
    public:
    Point(int x, int y): x(x), y(y){}

    void operator -(){
        x=-x;
        y=-y;
    }
    void show(){
        cout<<"x is: "<<x<<" y is: "<<y<<endl;
    }
};

int main(){
    Point p(2,3);
    p.show();
    -p;
    p.show();
    return 0;
}