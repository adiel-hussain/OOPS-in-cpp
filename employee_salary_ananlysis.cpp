#include <iostream>
using namespace std;
class Employee
{public:
    string name;
    double salary;
    Employee(string n, double s)
    {   name = n;
        salary = s;
    }
};
Employee highestSalary(Employee emp[], int n)
{
    Employee highest = emp[0];
    for (int i = 1; i < n; i++)
    {
        if (emp[i].salary > highest.salary)
        {
            highest = emp[i];
        }
    }
 return highest;
}
Employee increaseSalary(Employee emp)
{
    emp.salary = emp.salary + (emp.salary * 0.10);
    return emp;
}
int main()
{
    Employee employees[3] = {
        Employee("Ali", 30000),
        Employee("Ahmed", 40000),
        Employee("Adil", 35000)
    };
 Employee highest = highestSalary(employees, 3);
    cout << "Highest Salary Employee: " << highest.name << endl;
    cout << "Salary: " << highest.salary << endl;
    Employee revised = increaseSalary(employees[0]);
    cout << "\nAfter 10% Increment:" << endl;
    cout << "Name: " << revised.name << endl;
    cout << "Salary: " << revised.salary << endl;
    return 0;
}