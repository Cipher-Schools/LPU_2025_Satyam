#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("namess.txt");
    if (!fin) {
        cout << "Error opening file!\n";
        return 0;
    }
    string line;
    cout << "data in file is:\n";
    while (getline(fin, line))
        cout << line << endl;
    fin.close();
    return 0;
}
