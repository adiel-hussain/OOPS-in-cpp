#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks:";
    cin>>marks;
    try{
        if(marks<0 || marks>100){
            throw"invalid marks! marks should be between 0 to 100 ";
        }
        cout<<marks;
    }
    catch(const char* e){
        cout<<e;
    }
    return 0;
}