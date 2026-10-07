#include<iostream>
using namespace std;
class Employee{
    public:
    int id ;
    string name;

    Employee(int i, string n){
        id = i;
        name = n ;
    }

};
class manager: virtual public Employee{
    public:
    string department;
    int salary;
    manager(string d,int s){
        department = d;
        salary = s;
    }


    void displaydetails(){
        cout<<id <<" "<<name<<" "<<department<<" "<<salary<<endl;
    }
};
int main(){
   manager details[3]={
    manager("adiel","cse",1000,14),
    manager("abid","electrical",7000,12),
    manager("aquib","civil",17000,11),
    };
    for (int i = 0; i < 3; i++) {
        details[i].displaydetails();
    }

return 0;

}