#include<iostream>
using namespace std;

// not recommended

// class Student {
//     string name;
//     int roll;
// public:
//     Student(string n, int r) : roll(r), name(n) {}
// };



// recommended
class Student {
    string name;
    int roll;
public:
    Student(string n, int r) : name(n), roll(r) {}
};



int main(){
    Student s("Riya", 23);
}

