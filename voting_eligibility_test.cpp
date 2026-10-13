#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age:";
    cin>>age;

    try{
        if(age<18){
            throw"not eligible for voting";
        }
        cout<<"eligible for voting you are 18 plus";
    }
    catch(const char* msg){
        cout<<msg;
    }
}