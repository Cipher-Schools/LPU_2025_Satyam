#include<iostream>
using namespace std;
class Printer {
public:
    void print(int x) {
        cout << "Int: " << x << endl;
    }

    void print(string s) {
        cout << "String: " << s << endl;
    }
};

int main(){
    Printer p;
    p.print(2);
    p.print("hello");
}
