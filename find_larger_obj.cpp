#include<iostream>
using namespace std;
class Student{
    public:
    int rollNo;
    int marks;
};
int FindTop(Student s1, Student s2){
    if(s1.marks>s2.marks){
        cout<<"s1 is topper";}
    else{
        cout<<"s2 is topper";
    }
    
}

int main(){
    Student s1, s2;
    cout<<"enter student s1 rollNo:";
    cin>>s1.rollNo;
    cout<<"enter student s1 marks:";
    cin>>s1.marks;
    cout<<"enter student s1 rollNo:";
    cin>>s1.rollNo;
    cout<<"enter student s1 marks:";
    cin>>s1.marks;
    FindTop(s1,s2);


}
