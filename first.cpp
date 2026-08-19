#include<iostream>
using namespace std;
int main(){int a, b, c;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"enter c:";
    cin>>c;
    if(a>b&a>c){
        cout<<"a is largest";
    }else if (b>a&b>c){
        cout<<"b is largest";
    }else if (c>a&c>b){
        cout<<"c is largest";
    }else if(c==a&c>b&a>b){
        cout<<"c and a are the same numbers and the largest numbers";
    }else if(a==b&a>c&b>c){
        cout<<"a and b are the same numbers and the largest numbers ";
    }else if (b==c&b>a&c>a){
        cout<<"b and c are the same numbers and the largest numbers" ;
    }else {
       cout<< "a b c are the same  numbers ";
    }
    return 0;
}