#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int rollNUmber;
    int age ;

    Details(string n, int r , int a){
        name = n;
        rollNUmber = r;
        age = a;

    }


};
class EngineeringStudent : public Student{
    public:
    string branch ;
    int semester;

    Data( string b , int s){
        branch = b;
        semester = s;

    }
     void displayDetails(){
        cout<<name<<" "<<rollNUmber<<" "<<age<<" "<<branch<<" "<<semester;
     }


};
 int main(){
    EngineeringStudent s1;
    s1.Details("adiel", 40 , 20);
    s1.Data( "cse" , 3 );
    s1.displayDetails();

   return 0; 
 }