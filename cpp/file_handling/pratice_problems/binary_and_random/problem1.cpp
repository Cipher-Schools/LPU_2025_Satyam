// 1. Write a program to store employee records in a binary file
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Employee {
    int id;
    float salary;

};

int main() {
    ofstream fout("employee.dat", ios::binary | ios::app);

    Employee e1;
    Employee e2;
    Employee e3;
    e1.id=1; e1.salary=90000;
    e2.id=2; e2.salary=80000;
    e3.id=3; e3.salary=70000;

    fout.write((char*)&e1, sizeof(e1));
    fout.write((char*)&e2, sizeof(e2));
    fout.write((char*)&e3, sizeof(e3));

    fout.close();
    cout << "\nRecords added successfully!";
}
