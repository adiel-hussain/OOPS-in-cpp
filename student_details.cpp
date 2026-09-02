#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int rollNo;
    public:
    void setData(){
        name = "adiel";
        rollNo = 40;
    }
    void displayData(){
        cout<<"name :"<<name<<endl;
        cout<<"rollNo :"<<rollNo<<endl;
    }

};
int main(){
    Student s1;
    s1.setData();
    s1.displayData();
    return 0;
}