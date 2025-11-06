#include <iostream>
using namespace std;
class Point {
    public:
    int x, y;
    Point(){

    }
    Point(int a, int b) {
        cout<<"constuctor called"<<endl;
        x=a; y=b;
    }
    void show() { cout << "("<<x<<","<<y<<")"<<endl; }
};

int main() {
    Point p1(2,4);
    Point p2;
    p2.x=p1.x;
    p2.y=p1.y;
    p1.show();
    p2.show();
}
