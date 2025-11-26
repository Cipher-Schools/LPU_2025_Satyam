#include<iostream>
using namespace std;

// multilevel inheritance

class Grandparent{
    public:
    void show_grandparent(){
        cout<<"G"<<endl;
    }
};
class Parent: public Grandparent{
    public:
    void show_parent(){
        cout<<"P"<<endl;
    }
};
class Child: public Parent{
    public:
    void show_child(){
        cout<<"C"<<endl;
    }
};

int main(){
    Child c;
    c.show_grandparent();
    c.show_parent();
    c.show_child();
}