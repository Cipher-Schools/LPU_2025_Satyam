#include <iostream>
#include<string>
#include <fstream>
using namespace std;

int main() {
    // open for writing
    ofstream fout("names.txt"); // Create or overwrite file
    string text="hi dear";
    fout<<text<<endl;
    fout.close();
    cout << "Data written successfully.\n";
    return 0;
}
