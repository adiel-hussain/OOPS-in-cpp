#include<iostream>
using namespace std;
int main(){
    int index;
    int i;
    int size = 10;
    int arr[10];
    cout<<"enter the index of array";
    cin>>index;
    try{
        if(index>size){
            throw"invalid index";
        }
        for( i= 0; i<size;i++ ){
            if(i==index){
                break;
            }
        cout<<i;
        }
        
        
    }
    catch (const char* msg){
        cout<<msg;
    }
}