#include <iostream>
using namespace std;
class Student {
    string name;
    int age;
public:
    Student(string n, int a) { 
        name=n;
         age=a; 
    }

    // Copy constructor
    Student(const Student &s) { 
        name = s.name;
        age = s.age;
        cout << "Copy Constructor Called\n";
    }
    void show() { cout << name << " " << age << endl; }
};

int main() {
    Student s1("Aarav", 20);
    Student s2(s1); // calls copy constructor
    // Student s2=s1;
    s2.show();
}
