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

    string word;
    while (file >> word)
        if (word.length() > 4)
            cout << word <<endl;

    file.close();
}
