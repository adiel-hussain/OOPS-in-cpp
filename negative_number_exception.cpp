#include<iostream>
using namespace std;
int main(){
    int a;
    int i;
    cout<<"enter a:";
    cin>>a;
    try{
        if(a<0){
            throw"square root of negative number cannot be calculated";
        }
        for( i= 1; i<=a; i++){
            if(i*i==a){
                break;
            }
            
        }
        cout<<"square root of "<<a<<":"<< i;
    }
    catch(const char* msg){
        cout<<msg;
    }
    return 0;
}