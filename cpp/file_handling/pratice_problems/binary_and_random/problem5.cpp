// remove an employee with specific id
#include <iostream>
#include <fstream>
using namespace std;

struct Employee {
    int id;
    float salary;
};

int main() {
    ifstream fin("employee.dat", ios::binary);
    ofstream fout("temp.dat", ios::binary);
    Employee e;
    int id=2;
    while (fin.read((char*)&e, sizeof(e))) {
        if (e.id != id)
            fout.write((char*)&e, sizeof(e));
    }
    fin.close();
    fout.close();
    remove("employee.dat");
    rename("temp.dat", "employee.dat");
}