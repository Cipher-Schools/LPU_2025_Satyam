#include<iostream>
using namespace std;
class Student {
    string* name;
public:
    Student(string n) {
        name=new string;
        *name=n;
        
    }

    ~Student() {
        delete name;
    }
    void show(){
        cout<<*name;
    }
};

int main(){
    Student s("abcd");
    s.show();
}
