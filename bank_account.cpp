#include<iostream>
using namespace std;
class BankAccount{
    private:
    int accountNumber;
    int balance;
    int amount;
    int Amount;
    public:
    constuctor(){
        cout<<"enter the account number:";
        cin>>accountNumber;
        cout<<"enter the balance";
        cin>>balance;
    }
    void Deposit(){
        cout<<"deposit";
        cin>>amount;
        balance = balance + amount;
     }
     void withdraw(){
        cout<<"enter Amount:";
        cin>>Amount;
        if(Amount<0){
            cout<<"no valid"<<endl;}
        else if (Amount>balance){
            cout<<"insufficient amount"<<endl;
        }else{
            cout<<"withdraw successfully"<<endl;
        }
        }
    void display(){
        balance = balance - Amount;
        cout<<"remaining balance:"<<balance;
    }
};
int main(){
    BankAccount s1;
    s1.constuctor();
    s1.Deposit();
    s1.withdraw();
    s1.display();
}