#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    string name;
    int accountNumber;
    double balance;

public:
    // Default constructor
    BankAccount() {
        name = "Unknown";
        accountNumber = 0;
        balance = 0.0;
        cout << "Default constructor called for " << name << endl;
    }
    
    // Parameterized constructor
    BankAccount(string n, int accNo, double bal) {
        name = n;
        accountNumber = accNo;
        balance = bal;
        cout << "Parameterized constructor called for " << name << endl;
    }

    // Copy constructor
    BankAccount(const BankAccount &b) {
        name = b.name + " (Copy)";
        accountNumber = b.accountNumber;
        balance = b.balance;
        cout << "Copy constructor called for " << name << endl;
    }

    // Display details
    void showDetails() const {
        cout << "Account Holder: " << name
             << " | Account No: " << accountNumber
             << " | Balance: Rs. " << balance << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Account closed for " << name << endl;
    }
};

int main() {
    BankAccount acc1;  // Default
    BankAccount acc2("Aarav", 12345, 15000.50);  // Parameterized
    BankAccount acc3 = acc2;  // Copy constructor

    cout << "\n--- Account Details ---" << endl;
    acc1.showDetails();
    acc2.showDetails();
    acc3.showDetails();

    cout << "\n--- Program End (Watch Destructor Calls) ---" << endl;
    return 0;
}
