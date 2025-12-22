#include<iostream>
using namespace std;

// abstract class 
class PaymentMethod {
public:
    virtual void pay(int amount) = 0;   // pure virtual function
};

// concrete classes 
class CreditCard : public PaymentMethod {
    string cardNo;
public:
    CreditCard(string c) : cardNo(c) {}

    void pay(int amount) {
        cout << "Paid Rs." << amount << " using Credit Card\n";
    }
};


class UPI : public PaymentMethod {
    string upiId;
public:
    UPI(string u) : upiId(u) {}

    void pay(int amount) {
        cout << "Paid Rs." << amount << " using UPI\n";
    }
};


int main() {
    PaymentMethod* p1 = new CreditCard("1234-5678");
    PaymentMethod* p2 = new UPI("abc@upi");

    p1->pay(500);
    p2->pay(300);

    delete p1;
    delete p2;
}

