//  3. update salary of a employee with specific id
#include <iostream>
#include <fstream>
using namespace std;

struct Employee {
    int id;
    float salary;
};

int main() {
    fstream file("employee.dat", ios::in | ios::out | ios::binary);
    if (!file) {
        cout << "File not found!";
        return 0;
    }

    Employee e;
    int target=1;

    while (file.read((char*)&e, sizeof(e))) {
        if (e.id == target) {
            cout << "Current salary: " << e.salary << endl;
            int new_salary=50000;
            e.salary=new_salary;

            int pos = -1 * sizeof(e);
            file.seekp(pos, ios::cur); // move back one record
            file.write((char*)&e, sizeof(e));
            cout << "Salary updated successfully.\n";
            file.close();
            return 0;
        }
    }
    cout << "Employee not found.\n";
    file.close();
}
