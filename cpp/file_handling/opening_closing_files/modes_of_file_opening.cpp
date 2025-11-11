#include <iostream>
#include <fstream>
using namespace std;

// overwrites the file
void writeFile() {
    ofstream fout("sample.txt", ios::out);
    fout << "This is a new file.\n";
    fout << "Old content (if any) is now overwritten.\n";
    fout.close();
    cout << "File written successfully.\n";
}

void appendFile() {
    ofstream fout("sample.txt", ios::app);
    fout << "Appended line at the end of file.\n";
    fout.close();
    cout << "Data appended successfully.\n";
}

void readFile() {
    ifstream fin("sample.txt", ios::in);
    if (!fin) {
        cout << "File not found!\n";
        return;
    }
    string line;
    cout << "---- File Content ----\n";
    while (getline(fin, line))
        cout << line << endl;
    fin.close();
}

void binaryWriteRead() {
    ofstream fout("data.bin", ios::binary);
    int num = 8;
    fout.write(reinterpret_cast<char*>(&num), sizeof(num));
    fout.close();
    cout << "Binary data written.\n";

    ifstream fin("data.bin", ios::binary);
    int readNum;
    fin.read(reinterpret_cast<char*>(&readNum), sizeof(readNum));
    cout << "Binary data read: " << readNum << endl;
    fin.close();
}

void useAte() {
    fstream file("sample.txt", ios::in | ios::out | ios::ate);
    if (!file) {
        cout << "File not found!\n";
        return;
    }
    file << "Added text at end using ate mode.\n";
    file.seekp(0);
    cout<<"moved pointer to beginning"<<endl;
    file<<"hello";
    file.close();
    cout << "Data written using ios::ate.\n";
}

int main() {
    int choice;
    do {
        cout << "\n===== File Mode Demonstration =====\n";
        cout << "1. Write file (ios::out)\n";
        cout << "2. Append to file (ios::app)\n";
        cout << "3. Read file (ios::in)\n";
        cout << "4. Binary write & read (ios::binary)\n";
        cout << "5. Open with ios::ate\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: writeFile(); break;
            case 2: appendFile(); break;
            case 3: readFile(); break;
            case 4: binaryWriteRead(); break;
            case 5: useAte(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}
