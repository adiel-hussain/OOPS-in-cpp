#include<iostream>
using namespace std;
int main(){
    int balance;
    cout<<"enter balance:";
    cin>>balance;
    int withdraw;
    cout<<"enter withdraw:";
    cin>>withdraw;
    try{
        if(withdraw>balance){
            throw "insufficient balance";
        }
        cout<<"withdraw successfully";
    }
    catch(const char* msg){
        cout<<msg;
    }
    return 0;

}