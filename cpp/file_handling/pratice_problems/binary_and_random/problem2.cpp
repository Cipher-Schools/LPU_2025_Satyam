// 2. count no. of employee records
#include <iostream>
#include <fstream>
using namespace std;

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    ifstream fin("employee.dat", ios::binary);
    if (!fin) {
        cout << "File not found!";
        return 0;
    }

    fin.seekg(0, ios::end);
    int size = fin.tellg();
    int count = size / sizeof(Employee);
    fin.close();

    cout << "Total number of employee records: " << count << endl;
}
