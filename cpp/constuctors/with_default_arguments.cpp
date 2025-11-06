#include <iostream>
using namespace std;
class Point {
    int x, y;
public:
    Point(int a=0, int b=0) {
        cout<<"constuctor called"<<endl;
        x=a; y=b;
    }
    void show() { cout << "("<<x<<","<<y<<")"<<endl; }
};

int main() {
    Point p1, p2(5), p3(2,3);
    p1.show(); p2.show(); p3.show();
}
