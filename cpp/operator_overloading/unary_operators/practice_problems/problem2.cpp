// use a logical not (!) to print the name of a student
#include<iostream>
#include<vector>
using namespace std;

class Student{
    int roll_no;
    string name;
    public:
    Student(int roll_no, string name){
        this->roll_no=roll_no;
        this->name=name; 
    }
    void operator !(){
        cout<<"name is: "<<name;
    } 
};
int main(){
    Student s(40, "abcd");
    !s;
    return 0;
}