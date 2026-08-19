#include<iostream>
using namespace std;
int main(){
    int n = 345, sum = 0, digit;
    while(n!=0){
        digit = n %10;
        sum = sum + digit;
        n = n/10;

    }
    cout<<sum;
}