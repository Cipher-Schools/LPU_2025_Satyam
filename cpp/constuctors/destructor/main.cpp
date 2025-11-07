#include<iostream>
using namespace std;

class Student{
    string name;
    int marks;
    public:
    // constructor
    Student(string n, int m){
        name=n;
        marks=m;
        cout<<"constructor called for "<<name<<endl;
    }

    // destructor
    // no overloading possible
    ~Student(){
        cout<<"destructor called for "<<name<<endl;
    }
    void show_details(){
        cout<<"name: "<<name<<endl;
        cout<<"marks: "<<marks<<endl;
    }

};

int main(){
    Student s1("Amit", 99);
    Student s2("Rohit", 98);
    Student s3("Vivek", 80);
    cout<<"---student details---"<<endl;
    s1.show_details();
    s2.show_details();
    s3.show_details();
    cout<<"function ends"<<endl;
}