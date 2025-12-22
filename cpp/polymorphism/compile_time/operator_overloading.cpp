#include<iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int x, int y) : x(x), y(y) {}

    Point operator+(Point p) {
        return Point(x + p.x, y + p.y);
    }
    void show(){
        cout<<"x:"<<x<<" y:"<<y<<endl;
    }
};

int main(){
    Point p1(1,2);
    Point p2(3,4);
    Point p3=p1+p2;
    p3.show();

}
