// overload left shift(<<) , right shift(>>) operator 
// to decrement and increment marks of student by x respectively

#include <iostream>
using namespace std;

class Student {
    int marks;
    public:
    Student(int m): marks(m){}
    // overloading left shift operator
    void operator<<(int x){
        marks-=x;
    }
    // overloading right shift operator
    void operator>>(int x){
        marks+=x;
    }
    void show_marks(){
        cout<<marks<<endl;
    }
};

int main(){
    Student s(90);
    s>>10;
    s.show_marks();
    s<<10;
    s.show_marks();
    return 0;
}