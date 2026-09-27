#include <iostream>
using namespace std;

class BankAccount
{
    int accountNumber;
    string customerName;

    static int totalAccounts;

public:
    BankAccount(int accNo, string name)
    {
        accountNumber = accNo;
        customerName = name;
        totalAccounts++;
    }

    static void displayTotalAccounts()
    {
        cout << "Total Accounts = " << totalAccounts << endl;
    }
};

int BankAccount::totalAccounts = 0;

int main()
{
    BankAccount b1(101, "Ali");
    BankAccount b2(102, "Ahmed");
    BankAccount b3(103, "Rahul");

    BankAccount::displayTotalAccounts();

    return 0;
}