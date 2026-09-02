#include<iostream>
using namespace std;
class number{
    private:
    int num;
    public:
    void input(){
        cout<<"enter number:";
        cin>>num;
    }
    bool isEven(){
        if(num%2==0);
    }
    void displayResult(){
        if(isEven()){
            cout<<"even";
        }else{
            cout<<"odd";
        }

    }
};
int main(){
    number s1;
    s1.input();
    s1.isEven();
    s1.displayResult();
}