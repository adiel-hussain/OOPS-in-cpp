#include<iostream>
using namespace std;
class employee{
    private:
    string employeeName;
    int basicsalary;
    float HRA;
    float DA;
    float grossSalary;
    public:
    basicSalary(){
        cout<<"enter your employeeName :";
        cin>>employeeName;
        cout<<"enter your basicSalary :";
        cin>>basicsalary;
    }
    void calculateHRA(){
        
        HRA = basicsalary * 0.20;
    }
    void calculateDA(){
        
        DA = basicsalary * 0.10;
    }
    void displayGrossSalary(){
        
        grossSalary = basicsalary + HRA + DA;
        cout<<"gross Salary:"<<grossSalary; 
    }
};
int main(){
    employee s1;
    s1.basicSalary();
    s1.calculateHRA();
    s1.calculateDA();
    s1.displayGrossSalary();
    return 0;
}