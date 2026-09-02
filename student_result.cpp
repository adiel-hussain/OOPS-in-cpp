#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int rollNo;
    int marks[5];
    int totalMarks;
    float totalPercentage;
    public:
    input(){
        cout<<"enter name";
        cin>>name;
        cout<<"enter rollNo";
        cin>>rollNo;
        for(int i = 0 ; i<5;i++){
            cout<<"enter marks "<< i;
            cin>>marks[i];
        }
    }
    void calculateTotalMarks(){
        totalMarks= 0;
        for(int i = 0 ; i<5 ; i++){
            totalMarks = totalMarks + marks[i];
        }
    }
    void calculatePercentage(){
        totalPercentage = totalMarks/5;
    }
    void determineGrade(){
        if(totalPercentage>=90){
            cout<<"grade A";
        }else if(totalPercentage<90 && totalPercentage>=75){
            cout<<"grade B";    
        }else if (totalPercentage<75 && totalPercentage>=60){
            cout<<"grade C";
        }else if (totalPercentage<60 && totalPercentage>=40){
            cout<<"grade D";
        }else{
            cout<<"grade E";
        }
    }

    
};
int main(){
    student s1;
    s1.input();
    s1.calculateTotalMarks();
    s1.calculatePercentage();
    s1.determineGrade();
} 