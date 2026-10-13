#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;

    try{
        if(b==0){
            throw" division by zero is not allowed";
        }
        cout<<a/b;
    }
    catch(const char* msg){
        cout<<msg;
    }
    return 0;
}