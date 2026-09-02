#include<iostream>
using namespace std;
class Arraysum{
    private :
    int size = 10;
    int sum ;
    int arr[10];
    public:
    input(){
   for(int i = 0;i<size;i++){
    cout<<"enter elements:";
    cin>>arr[i];
   }
    }
    void findSum(){
        sum = 0;
        for(int i = 0; i<size ; i++){
            sum = sum + arr[i];
        }
    }
    void display(){
        cout<<"sum :"<<sum;
    }
    

};
int main(){
    Arraysum s1;
    s1.input();
    s1.findSum();
    s1.display();
}