#include<iostream>
using namespace std;

// using a constructor
// class Demo {
//     int x;
// public:
//     Demo(int a) {
//         x = a;   // assignment
//     }
// };

// using intializer list
class Demo {
    int x;
public:
    Demo(int a) : x(a) {}   // initialization
};

int main(){
    Demo d(5);
}
