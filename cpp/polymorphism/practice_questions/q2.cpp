/*
Problem Statement

Design a notification system that can send messages via:

Email

SMS

Requirements

Abstract class Notification

Virtual function send()

Derived classes: Email, SMS
*/

#include <bits/stdc++.h>
using namespace std;

class Notification {
public:
    virtual void send() = 0;
    virtual ~Notification() {}
};

class Email : public Notification {
public:
    void send() {
        cout << "Sending Email Notification\n";
    }
};


class SMS : public Notification {
public:
    void send() {
        cout << "Sending SMS Notification\n";
    }
};

int main() {
    Notification* n1 = new Email();
    Notification* n2 = new SMS();

    n1->send();
    n2->send();

    delete n1;
    delete n2;
}
