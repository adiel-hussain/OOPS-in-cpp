
#include <iostream>
using namespace std;
class BankAccount
{
public:
    int accountNumber;
    double balance;
    void transfer(BankAccount &receiver, double amount)
    { if (balance >= amount)
        { balance -= amount;
            receiver.balance += amount;
            cout << "Transfer successful" << endl;
        }else
        {   cout << "Insufficient balance" << endl;}
    }
};
int main()
{
    BankAccount sender, receiver;

    cout << "Enter account1 number: ";
    cin >> sender.accountNumber;
    cout << "Enter  balance1: ";
    cin >> sender.balance;
    cout << "Enter  account2 number: ";
    cin >> receiver.accountNumber;
    cout << "Enter  balance2: ";
    cin >> receiver.balance;
    double amount;
    cout << "Enter amount to transfer: ";
    cin >> amount;
    sender.transfer(receiver, amount);
    cout << "Sender balance = " << sender.balance << endl;
    cout << "Receiver balance = " << receiver.balance << endl;
    return 0;
}
