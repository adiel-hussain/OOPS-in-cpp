#include<iostream>
using namespace std;
int main(){int fact = 1;
    int n ;
    cout<<"enter a number:";
    cin>>n;
    for(int x = 1; x<=n;x++){
        fact = x * fact;
       
    }
    cout<<fact;
}