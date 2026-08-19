#include<iostream>
using namespace std;
int main(){int n = 121, rev = 0, digit;
    while(n!=0){
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n/10;}
        if(n==rev){
            cout<<"this is palidrome";
        }else{
            cout<<"this is not palidrome";
        }

    return 0;
}