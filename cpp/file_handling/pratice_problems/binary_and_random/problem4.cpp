//  4. Display record of nth employee using random access
#include <iostream>
#include <fstream>
using namespace std;

struct Employee {
    int id;
    float salary;
};

int main() {
    ifstream fin("employee.dat", ios::binary);
    if (!fin) {
        cout << "File not found!";
        return 0;
    }

    int n=1;

    fin.seekg((n - 1) * sizeof(Employee), ios::beg);

    Employee e;
    fin.read((char*)&e, sizeof(e));

    if (fin)
        cout << "ID: " << e.id <<"\nSalary: " << e.salary << endl;
    else
        cout << "Record not found.\n";

    fin.close();
}
