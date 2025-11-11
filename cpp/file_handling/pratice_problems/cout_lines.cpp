#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("sample.txt");
    if (!file) {
        cout << "File not found!" << endl;
        return 0;
    }

    int count = 0;
    string line;
    while (getline(file, line))
        count++;

    cout << "Total lines: " << count << endl;
    file.close();
}
