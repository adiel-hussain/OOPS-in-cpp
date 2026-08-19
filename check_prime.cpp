#include<iostream>
using namespace std;
int main(){
    int x;
    bool prime;
    cout<<"enter number:";
    cin>>x;
    if(x<=1){
        prime=false;

    }else{
        for(int i = 2; i<x;i++){
            if(x%i==0){
                prime=false;
                break;
            }else{
                prime=true;
            }
        }
    }
    if(prime==true){
        cout<<"the given number is prime";
    }else{
        cout<<"the given number is not prime";
    }
    return 0;
 }
