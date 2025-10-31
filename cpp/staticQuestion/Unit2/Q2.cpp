#include <iostream>
#include <iomanip>
using namespace std;

class UtilityBill {
public:
    double balance;
    double monthlyCharge;
    double payment;

    void calculateAdjustedBalance() {
        double lateFee = 0.0;

        if (payment < monthlyCharge) {
            lateFee = 0.05 * monthlyCharge;
            double adjustedBalance = balance + monthlyCharge - payment + lateFee;

            cout << fixed << setprecision(2);
            cout << "Late fee: Rs." << lateFee << endl;
            cout << "Adjusted balance: Rs." << adjustedBalance;
        } 
        else {
            double adjustedBalance = balance + monthlyCharge - payment;

            cout << fixed << setprecision(2);
            cout << "Adjusted balance: Rs." << adjustedBalance;
        }
    }
};

int main() {
    UtilityBill u;
    UtilityBill* ptr = &u; // pointer to object

    cin >> ptr->balance >> ptr->monthlyCharge >> ptr->payment;

    ptr->calculateAdjustedBalance();

    return 0;
}
