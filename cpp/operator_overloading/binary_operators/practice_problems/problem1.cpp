// overload * operator to find the dot product of two vectors
#include <iostream>
using namespace std;

class Vector2D {
    int x, y;
public:
    Vector2D(int a, int b) : x(a), y(b) {}

    // Overload * to find dot product
    int operator*(Vector2D v) {
        return x * v.x + y * v.y;
    }
};

int main() {
    Vector2D v1(3, 4);
    Vector2D v2(2, -1);
    int dot_product=v1*v2;
    cout << (v1 * v2) << endl;  // Output: 2
    return 0;
}
