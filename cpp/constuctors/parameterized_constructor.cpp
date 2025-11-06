#include <iostream>
using namespace std;
class Box {
    int l, b, h;
public:
    Box(int x, int y, int z) {
        l = x; b = y; h = z;
        cout << "Parameterized Constructor"<<endl;
    }
    int volume() { return l*b*h; }
};

int main() {
    Box b1(2,3,4);
    cout << b1.volume();
}
