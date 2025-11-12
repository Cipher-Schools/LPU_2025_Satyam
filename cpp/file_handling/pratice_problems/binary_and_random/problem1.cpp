// 1. Write a program to store employee records in a binary file
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    ofstream fout("employee.dat", ios::binary | ios::app);

    Employee e;
    cout<<"enter id, name and salary separated by space"<<endl;
    cin>>e.id>>e.name>>e.salary;
    fout.write((char*)&e, sizeof(e));
    fout.close();
    cout << "\nRecords added successfully!";
}
