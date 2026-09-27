#include<iostream>
using namespace std;
class Number{
    public:
    int data;
};
    int add(Number n1,Number n2){
        int sum;
         sum = n1.data + n2.data;
    
    return sum ;
    }
int main(){
    Number n1, n2,sum;
    cout<<"enter n1:";
    cin>>n1.data;
    cout<<"enter n2:";
    cin>> n2.data;
    sum.data = add(n1,n2);
    cout<<"Sum:"<<sum.data;
   
return 0;
}