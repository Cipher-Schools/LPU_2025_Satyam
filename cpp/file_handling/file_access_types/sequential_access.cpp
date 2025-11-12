#include <fstream>
#include <iostream>
using namespace std;

int main() {
    // writing into file
    ofstream fout("data.txt");
    string text="this is text";
    fout<<text<<endl;
    fout<<text<<endl;
    fout.close();

    // reading from file
    ifstream fin("data.txt");
    string line;
    while (getline(fin, line))
    {
        cout<<line<<endl;
    }
    fin.close();
}
