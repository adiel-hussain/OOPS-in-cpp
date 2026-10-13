#include<iostream>
using namespace std;
int main(){
    int a ;
    int b;
    cout<<"enter a :";
    cin>>a;
    cout<<"enter b :";
    cin>>b;
    char operation;
    cout<<"enter operation:";
    cin>>operation;
    try{
        switch(operation){
        case '+' :
        {
            cout<<a+b;
            break;
        }
        case '-' :
        {
            cout<<a-b;
            break;
        }
        case '*' :
        {
            cout<<a*b;
            break;
        }
        case '/' :
        {
            if(b == 0){throw "negative number is not valid in denominator";}
            cout<<a/b;
            break;
        }
        default :
        if(operation != '+' && operation != '-' && operation != '*' && operation != '/' ){
            throw"character exception for valid operator";
        }
        cout<<"not valid";
        
    }
   
    
}
catch(const char* e){
    cout<<e;
}
catch(const char* msg){
    cout<<msg;
}



return 0;
}