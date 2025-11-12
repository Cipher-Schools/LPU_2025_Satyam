#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Step 1: Write some data to file
    ofstream fout("demo.txt");
    fout << "ABCDE";
    cout << "Write pointer position after writing: " << fout.tellp() << endl;
    fout.close();

    // Step 2: Open for reading
    ifstream fin("demo.txt");
    cout << "Initial read pointer: " << fin.tellg() << endl;

    // Step 3: Move the get (read) pointer
    fin.seekg(2, ios::beg); // move to 3rd character (0-indexed)
    cout << "Read pointer after seekg(2, ios::beg): " << fin.tellg() << endl;

    char ch;
    fin >> ch;
    cout << "Character read at position 2: " << ch << endl;

    // Step 4: Move pointer from end
    fin.seekg(-2, ios::end); // move 2 chars before end
    cout << "Pointer now (2 before end): " << fin.tellg() << endl;

    fin >> ch;
    cout << "Character read near end: " << ch << endl;

    fin.close();
    return 0;
}
