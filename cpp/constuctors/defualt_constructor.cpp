#include <iostream>
using namespace std;

class Student {
    int roll;
public:
    Student() {
        roll = 0;
        cout << "Default Constructor Called\n";
    }
    void show() {
        cout << "Roll = " << roll << endl;
    }
};

int main() {
    Student s1;
    s1.show();
}
