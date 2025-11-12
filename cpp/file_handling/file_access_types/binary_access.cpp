#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    Student s1 = {1, "Riya", 92.5};

    ofstream fout("student.dat", ios::binary);
    fout.write((char*)&s1, sizeof(s1));
    fout.close();

    Student s2;
    ifstream fin("student.dat", ios::binary);
    fin.read((char*)&s2, sizeof(s2));
    fin.close();

    cout << s2.roll << " " << s2.name << " " << s2.marks;
}
