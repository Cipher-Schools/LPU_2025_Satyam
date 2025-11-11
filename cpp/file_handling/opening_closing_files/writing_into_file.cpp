#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // open for writing
    ofstream fout("names.txt"); // Create or overwrite file
    fout<<"hello"<<endl;
    fout.close();
    cout << "Data written successfully.\n";
    return 0;
}
