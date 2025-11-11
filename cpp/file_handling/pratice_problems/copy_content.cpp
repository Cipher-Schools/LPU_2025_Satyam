#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in("source.txt");
    ofstream out("destination.txt", ios::app);

    if (!in || !out) {
        cout << "Error opening file!" << endl;
        return 0;
    }

    string line;
    while (getline(in, line))
        out << line << endl;

    cout << "File copied successfully!" << endl;
    in.close();
    out.close();
}
