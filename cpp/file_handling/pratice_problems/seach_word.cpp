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

    string target, word;
    cout << "Enter word to search: ";
    cin >> target;

    bool found = false;
    while (file >> word) {
        if (word == target) {
            found = true;
            break;
        }
    }

    if (found) cout << "Word found in file!";
    else cout << "Word not found!";
    file.close();
}
