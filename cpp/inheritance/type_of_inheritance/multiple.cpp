#include<iostream>
using namespace std;

// multiple inheritance
class Printer {
public:
    Printer(){
        cout<<"Printer"<<endl;
    }
    void print() { cout << "Printing\n"; }
};

class Scanner {
public:
 Scanner(){
        cout<<"Scanner"<<endl;
    }
    void scan() { cout << "Scanning\n"; }
};

class AllInOne : public Printer, public Scanner {
    public:
    AllInOne(){
        cout<<"AllInOne"<<endl;
    }
};

int main(){
    AllInOne a;
    a.print();
    a.scan();
    
}