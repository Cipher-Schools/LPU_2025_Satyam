#include<iostream>
using namespace std;


class Father{
    public:
    void show_surname(){
        cout<<"singh";
    }
};


class Son: public Father{
};

int main(){
    Son s;
    s.show_surname();
}