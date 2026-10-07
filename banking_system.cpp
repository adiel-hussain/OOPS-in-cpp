#include <iostream>
using namespace std;
class Account {
public:
    int accountNumber;
    double balance;
public:
    Account(int acc, double bal) {
        accountNumber = acc;
        balance = bal;
    }
    virtual void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};
class SavingsAccount : public Account {
public:
    SavingsAccount(int acc, double bal)
        : Account(acc, bal) {
    }
    void display() override {
        cout << "Savings Account" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: 5%" << endl;   
    }
};
class CurrentAccount : public Account {
public:
    CurrentAccount(int acc, double bal)
        : Account(acc, bal) {
    }

    void display() override {
        cout << "Current Account" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Overdraft Facility: Available" << endl;
    }
};

int main() {
    SavingsAccount s(101, 50000);
    CurrentAccount c(102, 75000);
    Account* accounts[2];
    accounts[0] = &s;
    accounts[1] = &c;
    for (int i = 0; i < 2; i++) {
        accounts[i]->display();
    }
    return 0;
}