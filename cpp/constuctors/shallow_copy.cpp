#include <iostream>
using namespace std;
class Test {
    int *marks;
public:
    Test(int m) {
        marks = new int;
        *marks=m;
    }
    Test(const Test &t) { // shallow copy
        marks=t.marks;
    }
    ~Test() { 
        delete marks; 
    }

    // setter
    void setMarks(int m){
        *marks=m;
    }
    // getter
    void getMarks(){
        cout<<"marks are "<<*marks<<endl;
    }
};

int main() {
    Test t1(10);
    Test t2 = t1;
    t2.setMarks(50);
    t1.getMarks();
    t2.getMarks();
}
